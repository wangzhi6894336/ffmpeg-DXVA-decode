#include "stdafx.h"
#include "SouiRealWndHandler.h"
namespace SOUI
{
	CSouiRealWndHandler::CSouiRealWndHandler(void)
	{
	}

	CSouiRealWndHandler::~CSouiRealWndHandler(void)
	{
	}

	HWND CSouiRealWndHandler::OnRealWndCreate( SRealWnd *pRealWnd )
	{
		const SRealWndParam &param=pRealWnd->GetRealWndParam();

		HWND hWnd = pRealWnd->GetContainer()->GetHostHwnd();
		HINSTANCE hInstance =  (HINSTANCE)GetWindowLong (hWnd, GWL_HINSTANCE);

		HWND hRealWnd = CreateWindow("static", NULL, WS_CHILD | WS_VISIBLE | SS_OWNERDRAW, 0, 0, 0, 0, hWnd, (HMENU)pRealWnd->GetID(), hInstance, NULL);

		return hRealWnd;
	}

	void CSouiRealWndHandler::OnRealWndDestroy( SRealWnd *pRealWnd )
	{
		const SRealWndParam &param=pRealWnd->GetRealWndParam();
		
	}

	//不处理，返回FALSE
	BOOL CSouiRealWndHandler::OnRealWndSize( SRealWnd *pRealWnd )
	{
		return FALSE;
	}

	//不处理，返回FALSE
	BOOL CSouiRealWndHandler::OnRealWndInit( SRealWnd *pRealWnd )
	{
		return FALSE;
	}
}
