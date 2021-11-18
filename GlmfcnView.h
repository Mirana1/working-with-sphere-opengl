// GlmfcnView.h : interface of the CGlmfcnView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_GLMFCNVIEW_H__09051AAF_3735_441C_8339_4B6A127A55F5__INCLUDED_)
#define AFX_GLMFCNVIEW_H__09051AAF_3735_441C_8339_4B6A127A55F5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CGlmfcnView : public CView
{
protected: // create from serialization only
	CGlmfcnView();
	DECLARE_DYNCREATE(CGlmfcnView)

	HGLRC    m_hRC;
	HDC		m_hDC;
// Attributes
public:
	CGlmfcnDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGlmfcnView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	//}}AFX_VIRTUAL

// Implementation
public:
	BOOL InitializeOpenGL();
	BOOL SetupPixelFormat();
	void myReshape();
	BOOL makeCurrent();
	virtual ~CGlmfcnView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CGlmfcnView)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnViewAnimate();
	afx_msg void OnViewStopanimate();
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnViewChangetype();
	afx_msg void OnViewMakeitsolid();
	afx_msg void OnViewMakeitwired();
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnViewShininess();
};

#ifndef _DEBUG  // debug version in GlmfcnView.cpp
inline CGlmfcnDoc* CGlmfcnView::GetDocument()
   { return (CGlmfcnDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GLMFCNVIEW_H__09051AAF_3735_441C_8339_4B6A127A55F5__INCLUDED_)
