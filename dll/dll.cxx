#include "LoadDllMemoryApi.h"

extern "C" __declspec(dllexport) int __stdcall memoryLoadLibrary(void const* d, unsigned long long s, void** h)
{
    if (auto p = (void*)LoadLibraryMemoryExW(const_cast<void*>(d), {}, {}, {}, {})) 
        if (h) (*h) = p;
    return {};
}

extern "C" __declspec(dllexport) int __stdcall memoryFreeLibrary(void const* h)
{
    return FreeLibraryMemory((HMEMORYMODULE)const_cast<void*>(h));
}
