///////////////////////////////////////////////////////////////////////////////
// pmjTransform.h
#pragma once

#include "PMJ_Driver_ProjectInterfaces.h"

class CpmjTransform 
	: public ITComObject
	, public ITcADI
	, public ITcWatchSource
///<AutoGeneratedContent id="InheritanceList">
	, public ITcNcTrafo
///</AutoGeneratedContent>
{
public:
	DECLARE_IUNKNOWN()
	DECLARE_IPERSIST(CID_PMJ_Driver_ProjectCpmjTransform)
	DECLARE_ITCOMOBJECT_LOCKOP()
	DECLARE_ITCADI()
	DECLARE_ITCWATCHSOURCE()
	DECLARE_OBJPARAWATCH_MAP()
	DECLARE_OBJDATAAREA_MAP()

	CpmjTransform();
	virtual	~CpmjTransform();

///<AutoGeneratedContent id="InterfaceMembers">
	// ITcNcTrafo
	virtual HRESULT TCOMAPI Forward(TcNcTrafoParameter* p);
	virtual HRESULT TCOMAPI Backward(TcNcTrafoParameter* p);
	virtual HRESULT TCOMAPI TrafoSupported(TcNcTrafoParameter* p, bool fwd);
	virtual HRESULT TCOMAPI GetDimensions(ULONG* pFwdInput, ULONG* pFwdOutput);

///</AutoGeneratedContent>

protected:
	DECLARE_ITCOMOBJECT_SETSTATE();

///<AutoGeneratedContent id="Members">
	double m_Length;
///</AutoGeneratedContent>
};
