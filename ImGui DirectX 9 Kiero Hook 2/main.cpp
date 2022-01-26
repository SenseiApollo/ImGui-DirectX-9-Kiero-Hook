@@ -1,5 +1,9 @@
#include "includes.h"

#ifdef _WIN64
#define GWL_WNDPROC GWLP_WNDPROC
#endif

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

EndScene oEndScene = NULL;
@@ -96,4 +100,4 @@ BOOL WINAPI DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpReserved)
		break;
	}
	return TRUE;
} 
}
