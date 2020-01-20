///////////////////////////////////////////////////////////////////////////////
// PMJ_Driver_ProjectDriver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "PMJ_Driver_ProjectDriver.h"
#include "PMJ_Driver_ProjectClassFactory.h"

DECLARE_GENERIC_DEVICE(PMJ_DRIVER_PROJECTDRV)

IOSTATUS CPMJ_Driver_ProjectDriver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CPMJ_Driver_ProjectClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CPMJ_Driver_ProjectDriver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CPMJ_Driver_ProjectDriver::PMJ_DRIVER_PROJECTDRV_GetVersion( )
{
	return( (PMJ_DRIVER_PROJECTDRV_Major << 8) | PMJ_DRIVER_PROJECTDRV_Minor );
}

