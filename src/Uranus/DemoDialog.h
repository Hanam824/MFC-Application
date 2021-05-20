#pragma once


// CDemoDialog dialog

class CDemoDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CDemoDialog)

public:
	CDemoDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~CDemoDialog();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_TEST };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
