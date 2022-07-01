#ifndef __MISC_H__
#define __MISC_H__
#include <Windows.h>

extern const void* DetourFunc64(BYTE* const src, const BYTE* dest, const unsigned int jumplength);
extern const void* DetourFunc64_Inline(BYTE* const src, const BYTE* dest, const unsigned int jumplength);

struct HookContext
{
	BYTE original_code[64];
	SIZE_T dst_ptr;
	BYTE far_jmp[6];
};
extern HookContext* presenthook64;

struct HookContextInline
{
	BYTE original_code[200];
	BYTE onlyreturn[130]; // go back to original without having/calling the original detour instructions
	SIZE_T dst_ptr;
	BYTE far_jmp[6];
	BYTE trampolinecode[130];
	SIZE_T far_jmptrampolinedst;
	DWORD64 RAX;
	DWORD64 RCX;
	DWORD64 RBX;
	DWORD64 RDX;
	DWORD64 RSP;
	DWORD64 RDI;
	DWORD64 R8;
	DWORD64 HookLocation; // for restoring afterward if needed
	BYTE originalbytes[20];
	BYTE originallength;
};
extern HookContextInline* detourhook64inline;



#endif