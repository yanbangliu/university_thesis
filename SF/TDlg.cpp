// TDlg.cpp : implementation file
//

#include "stdafx.h"
#include "SF.h"
#include "TDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTDlg dialog


CTDlg::CTDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CTDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CTDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CTDlg, CDialog)
	//{{AFX_MSG_MAP(CTDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTDlg message handlers
