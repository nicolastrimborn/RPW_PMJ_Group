// dllmain.cpp : Defines the entry point for the DLL application.
#include "TcPch.h"
#pragma hdrstop

#include "TcBase.h"
#include "PMJ_Driver_ProjectClassFactory.h"
#include "TcOCFCtrlImpl.h"
#include "CrtInit.h"

class CPMJ_Driver_ProjectCtrl : public ITcOCFCtrlImpl<CPMJ_Driver_ProjectCtrl, CPMJ_Driver_ProjectClassFactory>
{
public:
	CPMJ_Driver_ProjectCtrl() {};
	virtual ~CPMJ_Driver_ProjectCtrl() {};
};

// Entry point for loaders like FreeBSD in Kernel loader, which is
// operating on an already relocated DLL. For these loaders we need
// an explicitly "dllexported" symbol.
extern "C"
__declspec(dllexport)
BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		cppInit();
		break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
		cppShutdown();
		break;
	}
	return TRUE;
}

// Entry point for Windows loader (implicit lookup, not by name)
BOOL APIENTRY DllMainWin(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	return DllMain(hModule, ul_reason_for_call, lpReserved);
}

extern "C"
__declspec(dllexport)
HRESULT APIENTRY DllGetTcCtrl(ITcCtrl** ppTcCtrl)
{
	HRESULT hr = E_FAIL;
	TRACE("PMJ_Driver_Project: DllGetTcCtrl(ITcCtrl** ppTcCtrl) \n");

	if (ppTcCtrl != NULL)
	{
		ITcCtrl* pTcCtrl = new IUnknownImpl<CPMJ_Driver_ProjectCtrl>;

		pTcCtrl->AddRef();
		*ppTcCtrl = pTcCtrl;
		hr = S_OK;
	}
	else
		hr = E_POINTER;

	return hr;
}
