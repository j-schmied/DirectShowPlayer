/*
	DirectX_Show.cpp
*/

#include "pch.h"
#include "DirectX_Show.h"
#include "DirectShowDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDirectX_ShowApp

BEGIN_MESSAGE_MAP(CDirectX_ShowApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CDirectX_ShowApp-Erstellung

CDirectX_ShowApp::CDirectX_ShowApp()
{
	// TODO: Hier Code zur Konstruktion einf�gen
	// Alle wichtigen Initialisierungen in InitInstance positionieren
}


// Das einzige CDirectX_ShowApp-Objekt

CDirectX_ShowApp theApp;


// CDirectX_ShowApp-Initialisierung

BOOL CDirectX_ShowApp::InitInstance()
{
	CWinApp::InitInstance();


	// Shell-Manager erstellen, falls das Dialogfeld
	// Shellstrukturansicht- oder Shelllistenansicht-Steuerelemente enth�lt.
	CShellManager* pShellManager = new CShellManager;

	//Visuellen Manager "Windows Native" aktivieren, um Designs f�r MFC-Steuerelemente zu aktivieren
	CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerWindows));

	// Standardinitialisierung
	// Wenn Sie diese Funktionen nicht verwenden und die Gr��e
	// der ausf�hrbaren Datei verringern m�chten, entfernen Sie
	// die nicht erforderlichen Initialisierungsroutinen.
	// �ndern Sie den Registrierungsschl�ssel, unter dem Ihre Einstellungen gespeichert sind.
	// TODO: �ndern Sie diese Zeichenfolge entsprechend,
	// z.B. zum Namen Ihrer Firma oder Organisation.
	SetRegistryKey(_T("Vom lokalen Anwendungs-Assistenten generierte Anwendungen"));

	CDirectShowDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: F�gen Sie hier Code ein, um das Schlie�en des
		//  Dialogfelds �ber "OK" zu steuern
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: F�gen Sie hier Code ein, um das Schlie�en des
		//  Dialogfelds �ber "Abbrechen" zu steuern
	}
	else if (nResponse == -1)
	{
		TRACE(traceAppMsg, 0, "Warnung: Fehler bei der Dialogfelderstellung, unerwartetes Beenden der Anwendung.\n");
		TRACE(traceAppMsg, 0, "Warnung: Wenn Sie MFC-Steuerelemente im Dialogfeld verwenden, ist #define _AFX_NO_MFC_CONTROLS_IN_DIALOGS nicht m�glich.\n");
	}

	// Den oben erstellten Shell-Manager l�schen.
	if (pShellManager != NULL)
	{
		delete pShellManager;
	}

	// Da das Dialogfeld geschlossen wurde, FALSE zur�ckliefern, sodass wir die
	//  Anwendung verlassen, anstatt das Nachrichtensystem der Anwendung zu starten.
	return FALSE;
}

