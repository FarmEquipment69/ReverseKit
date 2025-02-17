#include "ReverseLib/Includes.h"
#include "Instrumentation/InstrumentationCallback.h"
#include "Window/D3DWindow.h"
#include "Window/ImGuiSetup.h"
#include "Imports/Imports.h"
#include "Threads/Threads.h"
#include "Hooks/SetHooks.h"
#include "Menu/Menu.h"
#include "Window/Render.h"


DWORD WINAPI RetrievalThread(LPVOID lpParameter) 
{
    /*
    * Crashing, fixing it asap.
    if (!Instrumentation::Initialize()) {
        printf("[ReverseKit] Instrumentation::Initialize() failed\n");
    }
    */

    while (true) {
        GetImportsFromIAT();
        GetThreadInformation();
        Sleep(5000);
    }
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved) 
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        SetConsoleTitleA("ReverseKit Attached");
        HookSyscalls();
        CreateThread(nullptr, 0, RetrievalThread, nullptr, 0, nullptr);
        CreateThread(nullptr, 0, RenderThread, nullptr, 0, nullptr);
        break;
    case DLL_PROCESS_DETACH:
        UnhookSyscalls();
        break;
    }

    return TRUE;
}
