/*
	DirectX_Show.h
*/

#pragma once

#ifndef __AFXWIN_H__
#error "'pch.h' vor dieser Datei f�r PCH einschlie�en"
#endif

#include "resource.h"		// Hauptsymbole


// CDirectX_ShowApp:
// Siehe DirectX_Show.cpp f�r die Implementierung dieser Klasse
//

class CDirectX_ShowApp : public CWinApp {
public:
	CDirectX_ShowApp();

	// �berschreibungen
public:
	virtual BOOL InitInstance();

	// Implementierung

	DECLARE_MESSAGE_MAP()
};

extern CDirectX_ShowApp theApp;