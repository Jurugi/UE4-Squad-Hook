#include "Signatures.h"
#include "Logging.h"

DWORD64 dwSignatures[NumSigs] = { 0 };

bool bDataCompare(const BYTE *pData, const BYTE *bMask, const char *szMask)
{
	for (; *szMask; ++szMask, ++pData, ++bMask) if (*szMask == 'x' && *pData != *bMask) return false;
	return (*szMask) == NULL;
}

DWORD64 dwFindPattern(DWORD64 dwAddress, DWORD dwLen, BYTE *bMask, const char *szMask)
{
	for (DWORD i = 0; i < dwLen; i++) if (bDataCompare((BYTE*)(dwAddress + i), bMask, szMask)) return (DWORD64)(dwAddress + i);
	return 0;
}

void LoadSignatures()
{
	DWORD64 MainAddress = (DWORD64)GetModuleHandle("squadgame.exe") + 0x1000;
	 
	// GObjects pointer used to dump UE4-SDK related objects (relative offset at +3, size of instr is 7)
	dwSignatures[0] = dwFindPattern(MainAddress, 0x3460000, (BYTE*)"\x48\x8D\x1D\x00\x00\x00\x00\x8B\x05\x00\x00\x00\x00\x39\x45\x88\x7C\x20\x48\x8D\x45\x88\x48\x89\x85\x90\x05", "xxx????xx????xxxxxxxxxxxxxx");

	// GNames pointer used to dump UE4-SDK related objects (relative offset at +3, size of instr is 7)
	dwSignatures[1] = dwFindPattern(MainAddress, 0x3460000, (BYTE*)"\x4C\x8D\x05\x00\x00\x00\x00\xEB\x16\x48\x8D\x0D\x00\x00\x00\x00\xE8", "xxx????xxxxx????x"); 

	// Pointer to GWorld, just finding to better see how it works again and if there's other ways to grab it (relative offset at +3, size of instr is 7)
	dwSignatures[2] = dwFindPattern(MainAddress, 0x3460000, (BYTE*)"\x48\x89\x05\x11\x11\x11\x11\x49\x8B\xBF\x11\x11\x00\x00\xF6\x87\x11\x11\x00\x00\x11", "xxx????xxx??xxxx??xx?");

	// Pointer to GIsGameThreadIdInitialized byte (must backtrack and find 80 3D, then read relative offset at +2, size of instr is 7)
	dwSignatures[3] = 1;// dwFindPattern(MainAddress, 0x3460000, (BYTE*)"\xFF\x15\x11\x11\x11\x11\x3B\x05\x11\x11\x11\x11\x0F\x94\xC0\x84\xC0\x75\x11", "xx????xx????xxxxxx?");

	// GWorld can be found from gObjects and checking instances found from them (gWorldContext = 1st instance, gWorld = 2nd instance), the sig is still useful to instantly get the current level's world in 1 read
	// ProcessEvent can be found by its tests 400h or 402h (FUNC_NATIVE function flag), and is usually Vtable index 66 or 67, with the typical prologue bytes \x40\x55\x56\x57\x41\x54\x41\x55
	// UGameViewportClient->PostRender can be found by the fact it usually does nothing but calls DrawTransitionTitles, which can similarly be hooked the same way: find strings "Waiting to connect...", "GameViewportClient", "PausedMessage", "PAUSED", "LoadingMessage", "LOADING" etc. and go to function caller to find PostRender
	// Finding UGameViewportClient and UCanvas are the 3rd and last instance, it isn't that useful except the pCanvas can be used in PostRender, and at certain areas to draw anyway if using the internal hooks.
	// The external thread is being used because the intent here is to eventually make it into external, or even perhaps run it on the kernel/hyperv mode, so it shows you can't call some functions but can still do the same things once you have data/offsets.
	
	// Automatically exit if a signature fails 
	for (int i = 0; i < NumSigs; i++) if (dwSignatures[i] == 0)
	{
		#ifdef Logging
		LogSignatures();
		#endif
		exit(0); 
	}

}

#ifdef Logging
void LogSignatures()
{
	for (int i = 0; i < NumSigs; i++) add_log("%i: 0x%x", i, dwSignatures[i]);
}
#endif


