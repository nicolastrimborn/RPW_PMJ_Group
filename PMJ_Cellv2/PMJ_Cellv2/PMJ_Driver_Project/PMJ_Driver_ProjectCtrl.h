///////////////////////////////////////////////////////////////////////////////
// PMJ_Driver_ProjectCtrl.h

#ifndef __PMJ_DRIVER_PROJECTCTRL_H__
#define __PMJ_DRIVER_PROJECTCTRL_H__

#include <atlbase.h>
#include <atlcom.h>


#include "resource.h"       // main symbols
#include "PMJ_Driver_ProjectW32.h"
#include "TcBase.h"
#include "PMJ_Driver_ProjectClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CPMJ_Driver_ProjectCtrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CPMJ_Driver_ProjectCtrl, &CLSID_PMJ_Driver_ProjectCtrl>
	, public IPMJ_Driver_ProjectCtrl
	, public ITcOCFCtrlImpl<CPMJ_Driver_ProjectCtrl, CPMJ_Driver_ProjectClassFactory>
{
public:
	CPMJ_Driver_ProjectCtrl();
	virtual ~CPMJ_Driver_ProjectCtrl();

DECLARE_REGISTRY_RESOURCEID(IDR_PMJ_DRIVER_PROJECTCTRL)
DECLARE_NOT_AGGREGATABLE(CPMJ_Driver_ProjectCtrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CPMJ_Driver_ProjectCtrl)
	COM_INTERFACE_ENTRY(IPMJ_Driver_ProjectCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __PMJ_DRIVER_PROJECTCTRL_H__
