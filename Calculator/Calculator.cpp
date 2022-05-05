﻿// Calculator.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//

#include "framework.h"
#include "Calculator.h"


// 전역 변수:
HINSTANCE hInst;                                // 현재 인스턴스입니다.


// 이 코드 모듈에 포함된 함수의 선언을 전달합니다:

INT_PTR CALLBACK    DlgProc(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    hInst = hInstance;
    DialogBox(hInst, MAKEINTRESOURCE(IDD_DIALOG1), NULL, DlgProc);
    return 0;
}




// 정보 대화 상자의 메시지 처리기입니다.
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        else if (LOWORD(wParam) == IDC_CALCULATOR) {
            SetDlgItemInt(hDlg, IDC_Show, 123, TRUE);

        }
        break;
    }
    return (INT_PTR)FALSE;
}
