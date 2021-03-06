
// Loader.h : PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号
#include "FlashDownloadDlg.h"
#include "FlashUploadDlg.h"
#include "RFloadDlg.h"
#include "LoaderDlg.h"
#include "MMSystem.h"

#define WM_MAIN_MSG WM_USER+0x1001
#define WM_DOWNLOAD_MSG WM_USER+0x2001

extern CLoaderDlg *g_pMainDlg;
extern CFlashDownloadDlg *g_pDownloadDlg;
extern CFlashUploadDlg *g_pUploadDlg;
extern BOOL  logStat;

class CLoaderApp : public CWinApp
{
public:
	CLoaderApp();

// 重写
public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
};

extern CLoaderApp theApp;
