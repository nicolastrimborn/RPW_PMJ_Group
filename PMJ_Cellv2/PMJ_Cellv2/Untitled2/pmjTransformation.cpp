///////////////////////////////////////////////////////////////////////////////
// pmjTransformation.cpp
#include "TcPch.h"
#pragma hdrstop

#include "pmjTransformation.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
DEFINE_THIS_FILE()

///////////////////////////////////////////////////////////////////////////////
// Collection of interfaces implemented by module CpmjTransformation
BEGIN_INTERFACE_MAP(CpmjTransformation)
	INTERFACE_ENTRY_ITCOMOBJECT()
	INTERFACE_ENTRY(IID_ITcADI, ITcADI)
	INTERFACE_ENTRY(IID_ITcWatchSource, ITcWatchSource)
///<AutoGeneratedContent id="InterfaceMap">
///</AutoGeneratedContent>
END_INTERFACE_MAP()


IMPLEMENT_ITCOMOBJECT(CpmjTransformation)
IMPLEMENT_ITCOMOBJECT_SETSTATE_LOCKOP2(CpmjTransformation)
IMPLEMENT_ITCADI(CpmjTransformation)
IMPLEMENT_ITCWATCHSOURCE(CpmjTransformation)

///////////////////////////////////////////////////////////////////////////////
// Set parameters of CpmjTransformation 
BEGIN_SETOBJPARA_MAP(CpmjTransformation)
	SETOBJPARA_DATAAREA_MAP()
///<AutoGeneratedContent id="SetObjectParameterMap">
///</AutoGeneratedContent>
END_SETOBJPARA_MAP()

///////////////////////////////////////////////////////////////////////////////
// Get parameters of CpmjTransformation 
BEGIN_GETOBJPARA_MAP(CpmjTransformation)
	GETOBJPARA_DATAAREA_MAP()
///<AutoGeneratedContent id="GetObjectParameterMap">
///</AutoGeneratedContent>
END_GETOBJPARA_MAP()

///////////////////////////////////////////////////////////////////////////////
// Get watch entries of CpmjTransformation
BEGIN_OBJPARAWATCH_MAP(CpmjTransformation)
	OBJPARAWATCH_DATAAREA_MAP()
///<AutoGeneratedContent id="ObjectParameterWatchMap">
///</AutoGeneratedContent>
END_OBJPARAWATCH_MAP()

///////////////////////////////////////////////////////////////////////////////
// Get data area members of CpmjTransformation
BEGIN_OBJDATAAREA_MAP(CpmjTransformation)
///<AutoGeneratedContent id="ObjectDataAreaMap">
///</AutoGeneratedContent>
END_OBJDATAAREA_MAP()


///////////////////////////////////////////////////////////////////////////////
// Constructor
CpmjTransformation::CpmjTransformation()
{
///<AutoGeneratedContent id="MemberInitialization">
///</AutoGeneratedContent>
}

///////////////////////////////////////////////////////////////////////////////
// Destructor
CpmjTransformation::~CpmjTransformation() 
{
}

///////////////////////////////////////////////////////////////////////////////
// State Transitions 
///////////////////////////////////////////////////////////////////////////////
IMPLEMENT_ITCOMOBJECT_SETOBJSTATE_IP_PI(CpmjTransformation)

///////////////////////////////////////////////////////////////////////////////
// State transition from PREOP to SAFEOP
//
// Initialize input parameters 
// Allocate memory
HRESULT CpmjTransformation::SetObjStatePS(PTComInitDataHdr pInitData)
{
	HRESULT hr = S_OK;
	IMPLEMENT_ITCOMOBJECT_EVALUATE_INITDATA(pInitData);
	return hr;
}

///////////////////////////////////////////////////////////////////////////////
// State transition from SAFEOP to OP
//
// Register with other TwinCAT objects
HRESULT CpmjTransformation::SetObjStateSO()
{
	HRESULT hr = S_OK;
	return hr;
}

///////////////////////////////////////////////////////////////////////////////
// State transition from OP to SAFEOP
HRESULT CpmjTransformation::SetObjStateOS()
{
	HRESULT hr = S_OK;
	return hr;
}

///////////////////////////////////////////////////////////////////////////////
// State transition from SAFEOP to PREOP
HRESULT CpmjTransformation::SetObjStateSP()
{
	HRESULT hr = S_OK;
	return hr;
}