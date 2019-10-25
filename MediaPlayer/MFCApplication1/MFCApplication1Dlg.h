
// MFCApplication1Dlg.h: Headerdatei
//
#include "CMCIObject.h"

#pragma once

// CMFCApplication1Dlg-Dialogfeld
class CMFCApplication1Dlg : public CDialogEx
{
// Konstruktion
public:
	CMFCApplication1Dlg(CWnd* pParent = nullptr);	// Standardkonstruktor

// Dialogfelddaten
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION1_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV-Unterstützung


// Implementierung
protected:
	HICON m_hIcon;
	CMCIObject mci;
	// Generierte Funktionen für die Meldungstabellen
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedVideobutton();
};
