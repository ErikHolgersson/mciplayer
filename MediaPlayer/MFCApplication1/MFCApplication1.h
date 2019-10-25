
// MFCApplication1.h: Hauptheaderdatei für die PROJECT_NAME-Anwendung
//

#pragma once

#ifndef __AFXWIN_H__
	#error "'pch.h' vor dieser Datei für PCH einschließen"
#endif

#include "resource.h"		// Hauptsymbole


// CMediaPlayer:
// Siehe MFCApplication1.cpp für die Implementierung dieser Klasse
//

class CMediaPlayer : public CWinApp
{
public:
	CMediaPlayer();

// Überschreibungen
public:
	virtual BOOL InitInstance();

// Implementierung

	DECLARE_MESSAGE_MAP()
};

extern CMediaPlayer theApp;
