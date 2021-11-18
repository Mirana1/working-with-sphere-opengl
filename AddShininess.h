#pragma once


// AddShininess dialog

class AddShininess : public CDialog
{
	DECLARE_DYNAMIC(AddShininess)

public:
	AddShininess(CWnd* pParent = nullptr);   // standard constructor
	virtual ~AddShininess();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	int Shininess;
	afx_msg void OnNMCustomdrawSlider1(NMHDR* pNMHDR, LRESULT* pResult);
};
