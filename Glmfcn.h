// Glmfcn.h : main header file for the GLMFCN application
//

#if !defined(AFX_GLMFCN_H__39EC92C6_39CC_47F6_A198_3E31EDFF7C30__INCLUDED_)
#define AFX_GLMFCN_H__39EC92C6_39CC_47F6_A198_3E31EDFF7C30__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols
//#include "Glmfcn_i.h"

/////////////////////////////////////////////////////////////////////////////
// CGlmfcnApp:
// See Glmfcn.cpp for the implementation of this class
//

class CGlmfcnApp : public CWinApp
{
public:
	CGlmfcnApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGlmfcnApp)
	public:
	virtual BOOL InitInstance();
		virtual int ExitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CGlmfcnApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	BOOL m_bATLInited;
private:
	BOOL InitATL();
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GLMFCN_H__39EC92C6_39CC_47F6_A198_3E31EDFF7C30__INCLUDED_)
