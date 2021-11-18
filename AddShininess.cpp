// AddShininess.cpp : implementation file
//

#include "StdAfx.h"
#include "Glmfcn.h"
#include "AddShininess.h"
#include "afxdialogex.h"


// AddShininess dialog

IMPLEMENT_DYNAMIC(AddShininess, CDialog)

AddShininess::AddShininess(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG2, pParent)
	, Shininess(0)
{

}

AddShininess::~AddShininess()
{
}

void AddShininess::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Slider(pDX, IDC_SLIDER1, Shininess);
	DDV_MinMaxInt(pDX, Shininess, 0, 100);
}


BEGIN_MESSAGE_MAP(AddShininess, CDialog)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER1, &AddShininess::OnNMCustomdrawSlider1)
END_MESSAGE_MAP()


// AddShininess message handlers


void AddShininess::OnNMCustomdrawSlider1(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
}
