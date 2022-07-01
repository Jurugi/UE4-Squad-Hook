#include "Misc.h"

//DetourFunc64 copied from here https://www.unknowncheats.me/forum/c-and-c-/134871-64-bit-detour-function.html
HookContext* presenthook64;
const void* DetourFunc64(BYTE* const src, const BYTE* dest, const unsigned int jumplength)
{
	// Allocate a memory page that is going to contain executable code.
	MEMORY_BASIC_INFORMATION mbi;
	for (SIZE_T addr = (SIZE_T)src; addr > (SIZE_T)src - 0x80000000; addr = (SIZE_T)mbi.BaseAddress - 1)
	{
		if (!VirtualQuery((LPCVOID)addr, &mbi, sizeof(mbi)))
		{
			break;
		}

		if (mbi.State == MEM_FREE)
		{
			if (presenthook64 = (HookContext*)VirtualAlloc(mbi.BaseAddress, 0x1000, MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE))
			{
				break;
			}
		}
	}

	// If allocating a memory page failed, the function failed.
	if (!presenthook64)
	{
		return NULL;
	}

	// Save original code and apply detour. The detour code is:
	// push rax
	// movabs rax, 0xCCCCCCCCCCCCCCCC
	// xchg rax, [rsp]
	// ret
	BYTE detour[] = { 0x50, 0x48, 0xB8, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x48, 0x87, 0x04, 0x24, 0xC3 };
	const unsigned int length = jumplength;
	memcpy(presenthook64->original_code, src, length);
	memcpy(&presenthook64->original_code[length], detour, sizeof(detour));
	*(SIZE_T*)&presenthook64->original_code[length + 3] = (SIZE_T)src + length;

	// Build a far jump to the destination function.
	*(WORD*)&presenthook64->far_jmp = 0x25FF;
	*(DWORD*)(presenthook64->far_jmp + 2) = (DWORD)((SIZE_T)presenthook64 - (SIZE_T)src + FIELD_OFFSET(HookContext, dst_ptr) - 6);
	presenthook64->dst_ptr = (SIZE_T)dest;

	// Write the hook to the original function.
	DWORD flOld = 0;
	VirtualProtect(src, 6, PAGE_EXECUTE_READWRITE, &flOld);
	memcpy(src, presenthook64->far_jmp, sizeof(presenthook64->far_jmp));
	VirtualProtect(src, 6, flOld, &flOld);

	// Return a pointer to the original code.
	return presenthook64->original_code;
}

// Experimental, storing/restoring certain or most registers by Jurugi/Leg[]
HookContextInline* detourhook64inline = 0;
const void* DetourFunc64_Inline(BYTE* const src, const BYTE* dest, const unsigned int jumplength)
{
	// Allocate a memory page that is going to contain executable code.
	MEMORY_BASIC_INFORMATION mbi;
	for (SIZE_T addr = (SIZE_T)src; addr > (SIZE_T)src - 0x80000000; addr = (SIZE_T)mbi.BaseAddress - 1)
	{
		if (!VirtualQuery((LPCVOID)addr, &mbi, sizeof(mbi)))
		{
			break;
		}

		if (mbi.State == MEM_FREE)
		{
			if (detourhook64inline = (HookContextInline*)VirtualAlloc(mbi.BaseAddress, 0x1000, MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE))
			{
				break;
			}
		}
	}

	// If allocating a memory page failed, the function failed.
	if (!detourhook64inline)
	{
		return NULL;
	}

	// Create prologue bytes (restore registers from the absolute addr, saved context spots)
	BYTE prologuebytes[] = {
	0x48, 0xA1, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, // 0x0-mov rax, [rcxaddr]
	0x48, 0x8B, 0xC8, // 0xA-mov rcx,rax 
	0x48, 0xA1, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, // 0xD-mov rax, [rbxaddr]
	0x48, 0x8B, 0xD8, // 0x17-mov rbx,rax
	0x48, 0xA1, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, // 0x1A-mov rax, [rdxaddr]
	0x48, 0x8B, 0xD0, // 0x24-mov rdx,rax
	0x48, 0xA1, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, // 0x27-mov rax, [rspaddr]
	0x48, 0x8B, 0xE0, // 0x31-mov rsp,rax
	0x48, 0xA1, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, // 0x34-mov rax, [rdiaddr]
	0x48, 0x8B, 0xF8, // 0x3E-mov rdi,rax
	0x48, 0xA1, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC // 0x41-mov rax,qword ptr ds:[raxaddr]        
	};
	*(DWORD64*)((DWORD64)(prologuebytes + 0x2)) = (DWORD64)detourhook64inline + FIELD_OFFSET(HookContextInline, RCX); // set RCX addr
	*(DWORD64*)((DWORD64)(prologuebytes + 0xF)) = (DWORD64)detourhook64inline + FIELD_OFFSET(HookContextInline, RBX); // set RBX addr
	*(DWORD64*)((DWORD64)(prologuebytes + 0x1C)) = (DWORD64)detourhook64inline + FIELD_OFFSET(HookContextInline, RDX); // set RDX addr
	*(DWORD64*)((DWORD64)(prologuebytes + 0x29)) = (DWORD64)detourhook64inline + FIELD_OFFSET(HookContextInline, RSP); // set RSP addr
	*(DWORD64*)((DWORD64)(prologuebytes + 0x36)) = (DWORD64)detourhook64inline + FIELD_OFFSET(HookContextInline, RDI); // set RDI addr
	*(DWORD64*)((DWORD64)(prologuebytes + 0x43)) = (DWORD64)detourhook64inline + FIELD_OFFSET(HookContextInline, RAX); // set RAX addr

	// Save original code and apply detour. The detour code is:
	// push rax
	// movabs rax, 0xCCCCCCCCCCCCCCCC
	// xchg rax, [rsp]
	// ret
	// add restoring of registers in front of original code first 
	BYTE detour[] = { 0x50, 0x48, 0xB8, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x48, 0x87, 0x04, 0x24, 0xC3 };
	const unsigned int length = jumplength;
	const unsigned int prologuelength = sizeof(prologuebytes);
	memcpy(detourhook64inline->original_code, prologuebytes, prologuelength);
	memcpy(&detourhook64inline->original_code[prologuelength], src, length);
	memcpy(&detourhook64inline->original_code[prologuelength + length], detour, sizeof(detour));
	*(SIZE_T*)&detourhook64inline->original_code[prologuelength + length + 3] = (SIZE_T)src + length;

	// Save prologue and return execution, without original code
	memcpy(detourhook64inline->onlyreturn, prologuebytes, prologuelength);
	memcpy(&detourhook64inline->onlyreturn[prologuelength], detour, sizeof(detour));
	*(SIZE_T*)&detourhook64inline->onlyreturn[prologuelength + 3] = (SIZE_T)src + length;

	// Build a hook to the target destination (trampoline code)
	*(WORD*)&detourhook64inline->far_jmp = 0x25FF;
	*(DWORD*)(detourhook64inline->far_jmp + 2) = (DWORD)((SIZE_T)detourhook64inline - (SIZE_T)src + FIELD_OFFSET(HookContextInline, dst_ptr) - 6);
	detourhook64inline->dst_ptr = (SIZE_T)detourhook64inline->trampolinecode;

	// Create trampolinecode bytes that store last register values in the valid context addresses (for restoring later without changing stack)
	BYTE trampoline[] = { 0x48, 0xA3, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, // 0x0-mov[0xRAX],RAX;
	0x48, 0x8B, 0xC1, // 0xA-mov RAX, RCX;
	0x48, 0xA3, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, // 0xD-mov[0xRCX],RAX;
	0x48, 0x8B, 0xC3, // 0x17-mov RAX, RBX;
	0x48, 0xA3, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, // 0x1A-mov[0xRBX],RAX;
	0x48, 0x8B, 0xC2, // 0x24-mov RAX, RDX;
	0x48, 0xA3, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, // 0x27-mov[0xRDX],RAX;
	0x48, 0x8B, 0xC4, // 0x31-mov RAX, RSP;
	0x48, 0xA3, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, // 0x34-mov[0xRSP],RAX;
	0x48, 0x8B, 0xC7, // 0x3E-mov RAX, RDI;
	0x48, 0xA3, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, // 0x41-mov[0xRDI],RAX;
	0x48, 0xA1, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, // 0x4B-mov rax,qword ptr ds:[raxaddr] 
	0xFF, 0x25, 0xCC, 0xCC, 0xCC, 0xCC // 0x55-jmp relative addr ( to actual function )
	};
	*(DWORD64*)((DWORD64)(trampoline + 0x2)) = (DWORD64)detourhook64inline + FIELD_OFFSET(HookContextInline, RAX); // set RAX addr
	*(DWORD64*)((DWORD64)(trampoline + 0xF)) = (DWORD64)detourhook64inline + FIELD_OFFSET(HookContextInline, RCX); // set RCX addr
	*(DWORD64*)((DWORD64)(trampoline + 0x1C)) = (DWORD64)detourhook64inline + FIELD_OFFSET(HookContextInline, RBX); // set RBX addr
	*(DWORD64*)((DWORD64)(trampoline + 0x29)) = (DWORD64)detourhook64inline + FIELD_OFFSET(HookContextInline, RDX); // set RDX addr
	*(DWORD64*)((DWORD64)(trampoline + 0x36)) = (DWORD64)detourhook64inline + FIELD_OFFSET(HookContextInline, RSP); // set RSP addr
	*(DWORD64*)((DWORD64)(trampoline + 0x43)) = (DWORD64)detourhook64inline + FIELD_OFFSET(HookContextInline, RDI); // set RSP addr
	*(DWORD64*)((DWORD64)(trampoline + 0x4D)) = (DWORD64)detourhook64inline + FIELD_OFFSET(HookContextInline, RAX); // restore RAX addr to original value before calling
	memcpy(detourhook64inline->trampolinecode, trampoline, sizeof(trampoline)); // copy trampoline code to its execution spot
	DWORD64 relativeJmpAddr = (DWORD64)detourhook64inline->trampolinecode + 0x55; // setup a relative jmp to actual hooked function
	*(DWORD*)(relativeJmpAddr + 2) = (DWORD)((SIZE_T)detourhook64inline - (SIZE_T)relativeJmpAddr + FIELD_OFFSET(HookContextInline, far_jmptrampolinedst) - 6);
	detourhook64inline->far_jmptrampolinedst = (SIZE_T)dest;

	// Set restorability helpers
	detourhook64inline->HookLocation = (DWORD64)src;
	memset(detourhook64inline->originalbytes, 0, sizeof(detourhook64inline->originalbytes));
	memcpy(detourhook64inline->originalbytes, src, length);
	detourhook64inline->originallength = length;

	// Write the hook to the original function.
	DWORD flOld = 0;
	VirtualProtect(src, 6, PAGE_EXECUTE_READWRITE, &flOld);
	memcpy(src, detourhook64inline->far_jmp, sizeof(detourhook64inline->far_jmp));
	VirtualProtect(src, 6, flOld, &flOld);

	// Return a pointer to the original code.
	return detourhook64inline->original_code;
}