// DemoDialog.cpp : implementation file
//

#include "stdafx.h"
#include "Uranus.h"
#include "DemoDialog.h"
#include "afxdialogex.h"


// CDemoDialog dialog

IMPLEMENT_DYNAMIC(CDemoDialog, CDialogEx)

CDemoDialog::CDemoDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_TEST, pParent)
{

}

CDemoDialog::~CDemoDialog()
{
}

void CDemoDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDemoDialog, CDialogEx)
END_MESSAGE_MAP()


// CDemoDialog message handlers
