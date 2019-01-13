#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
    MSG msg;

    HWND hWnd = CreateWindow(TEXT("button"), TEXT("Easy"), WS_VISIBLE | WS_POPUP,
        10, 10, 80, 25, NULL, NULL, NULL,  NULL);

    ShowWindow(hWnd, SW_SHOW);
    UpdateWindow(hWnd);

    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return (int) msg.wParam;
}
