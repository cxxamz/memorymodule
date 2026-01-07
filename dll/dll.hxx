#pragma once

extern "C" __declspec(dllexport) int __stdcall dllAttach(void const* d, unsigned long long s, void** h);
extern "C" __declspec(dllexport) int __stdcall dllDetach(void const* h);
