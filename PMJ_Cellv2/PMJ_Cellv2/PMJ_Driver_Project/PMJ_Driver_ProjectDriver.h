///////////////////////////////////////////////////////////////////////////////
// PMJ_Driver_ProjectDriver.h

#ifndef __PMJ_DRIVER_PROJECTDRIVER_H__
#define __PMJ_DRIVER_PROJECTDRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define PMJ_DRIVER_PROJECTDRV_NAME        "PMJ_DRIVER_PROJECT"
#define PMJ_DRIVER_PROJECTDRV_Major       1
#define PMJ_DRIVER_PROJECTDRV_Minor       0

#define DEVICE_CLASS CPMJ_Driver_ProjectDriver

#include "ObjDriver.h"

class CPMJ_Driver_ProjectDriver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl PMJ_DRIVER_PROJECTDRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(PMJ_DRIVER_PROJECTDRV)
	VxD_Service( PMJ_DRIVER_PROJECTDRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __PMJ_DRIVER_PROJECTDRIVER_H__