#pragma once

extern "C" int memoryLoadLibrary(void const* d, unsigned long long s, void** h);
extern "C" int memoryFreeLibrary(void const* h);
