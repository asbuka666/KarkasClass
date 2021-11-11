// Мой класс
//
#include "MyWindow.h"

int APIENTRY WinMain(
	_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPSTR lpCmdLine,
	_In_ int nCmdShow
)
{
	MyWindow mw;

	if (!mw.MyRegisterClass(hInstance))
		MessageBox(NULL, L"Окно не зарегистрировалось", L"", MB_OK);

	mw.InitInstance(hInstance, nCmdShow);

	mw.ProcessingLetters();

	return mw.msg.wParam;
}