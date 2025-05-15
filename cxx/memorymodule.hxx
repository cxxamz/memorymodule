#pragma once

extern "C" __declspec(dllexport) int __stdcall memoryLoadLibrary(void const* d, unsigned long long s, void** h);
extern "C" __declspec(dllexport) int __stdcall memoryFreeLibrary(void const* h);
