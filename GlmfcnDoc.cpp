// GlmfcnDoc.cpp : implementation of the CGlmfcnDoc class
//

#include "stdafx.h"
#include "Glmfcn.h"

#include "GlmfcnDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGlmfcnDoc

IMPLEMENT_DYNCREATE(CGlmfcnDoc, CDocument)

BEGIN_MESSAGE_MAP(CGlmfcnDoc, CDocument)
	//{{AFX_MSG_MAP(CGlmfcnDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGlmfcnDoc construction/destruction

CGlmfcnDoc::CGlmfcnDoc()
{
	// TODO: add one-time construction code here

}

CGlmfcnDoc::~CGlmfcnDoc()
{
}

BOOL CGlmfcnDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)
	edge = 1;
	m_pDC=NULL;

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CGlmfcnDoc serialization

void CGlmfcnDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
		char ss[80];
		ar.ReadString(ss,79);
		sscanf(ss,"%f",&edge);

		ar.ReadString(ss, 79);
		sscanf(ss, "%f %f %f", &m_Red, &m_Green, &m_Blue);
	}
}

/////////////////////////////////////////////////////////////////////////////
// CGlmfcnDoc diagnostics

#ifdef _DEBUG
void CGlmfcnDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CGlmfcnDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CGlmfcnDoc commands
