
// CheckBoxDemo.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CCheckBoxDemoApp: 
// �йش����ʵ�֣������ CheckBoxDemo.cpp
//

class CCheckBoxDemoApp : public CWinApp
{
public:
	CCheckBoxDemoApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CCheckBoxDemoApp theApp;