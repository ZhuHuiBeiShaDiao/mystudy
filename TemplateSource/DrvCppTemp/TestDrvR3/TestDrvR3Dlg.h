
// TestDrvR3Dlg.h : ͷ�ļ�
//

#pragma once


// CTestDrvR3Dlg �Ի���
class CTestDrvR3Dlg : public CDialogEx
{
// ����
public:
	CTestDrvR3Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TESTDRVR3_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString m_ioctl;
	afx_msg void OnBnClickedButton5();
};