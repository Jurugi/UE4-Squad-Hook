# UE4-Squad-Hook
Example hooking Unreal Engine 4 on Squadx64
for offline or testing only, this is not for bypassing any form of deterrent or AC, but for learning how the engine works, you are free to do what you wish with this information. 

You are free to re-use, just if asked in that 1/1000000 chance, be honest where it came from.

Includes
- std strings versions changed to char* version for fnames/objects (doesn't import std and useless things for stealth)
- find gobjects,fname,call functions
- all necessary sdk functions/data from dumps
- drawing, setup/call any function
- does not include full dump
- my inline x64 detours included
- hook postrender by both vtable/inline
- find/call processevent
- thread method for testing external ways (no hooks)

Reversed/fixed exactly how it's called in the engine for online mode:
- isalive
- teamcheck
- w2s/getrotfromaxes
- fixed general math/funcs

notes/helpful info below for those who want to find things on UE4 4.2x+ versions and just mess with it.
https://l3g.space/files/SystemTest/?Main_Page:Unreal_Engine_4
