#pragma once

#define STRUCT
#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <assert.h>
#include <tchar.h>
#include "resource.h"

class MyWindow
{
public:
	HWND hwnd;
	WNDCLASSEX wc;
	MSG msg;
	const wchar_t* MyClass = L"My Class";

	ATOM MyRegisterClass(HINSTANCE hInstance);
	BOOL InitInstance(HINSTANCE hInstance, int nCmdShow);
	void ProcessingLetters();
	static LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);
};
