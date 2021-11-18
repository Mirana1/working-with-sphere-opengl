// GlmfcnDoc.h : interface of the CGlmfcnDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_GLMFCNDOC_H__14BACAB7_B037_47DF_87A3_FEA0970B4FA1__INCLUDED_)
#define AFX_GLMFCNDOC_H__14BACAB7_B037_47DF_87A3_FEA0970B4FA1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CGlmfcnDoc : public CDocument
{
protected: // create from serialization only
	CGlmfcnDoc();
	DECLARE_DYNCREATE(CGlmfcnDoc)

// Attributes
public:
	CDC*     m_pDC;
	int m_WindowWidth,m_WindowHeight;
	double m_AspectRatio;
	float edge;
	int m_Red = 0;
	int m_Green = 0;
	int m_Blue = 0;
	int shininess;
//	int day,year;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGlmfcnDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CGlmfcnDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CGlmfcnDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GLMFCNDOC_H__14BACAB7_B037_47DF_87A3_FEA0970B4FA1__INCLUDED_)
