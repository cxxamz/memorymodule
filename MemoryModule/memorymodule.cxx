#include "LoadDllMemoryApi.h"

extern "C" int memoryLoadLibrary(void const* d, unsigned long long s, void** h)
{
    if (auto p = (void*)LoadLibraryMemoryExW(const_cast<void*>(d), {}, {}, {}, {})) 
        if (h) (*h) = p;
    return {};
}

extern "C" int memoryFreeLibrary(void const* h)
{
    return FreeLibraryMemory((HMEMORYMODULE)const_cast<void*>(h));
}
