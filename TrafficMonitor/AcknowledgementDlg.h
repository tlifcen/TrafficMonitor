#pragma once

// CAcknowledgementDlg 对话框

class CAcknowledgementDlg : public CDialog
{
	DECLARE_DYNAMIC(CAcknowledgementDlg)

public:
	CAcknowledgementDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CAcknowledgementDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ACKNOWLEDGEMENT_DIALOG };
#endif

protected:

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	CString GetDonateList();		//从资源文件加载捐赠人员名单

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
