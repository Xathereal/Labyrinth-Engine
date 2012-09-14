//--------------------------------------------------------------------------------//
//
// \author      Conan H. Bourke
// \date        13/01/2012
// \brief		A minimal abstract application wrapper.
//
//--------------------------------------------------------------------------------//
#include "AppBase.h"
//--------------------------------------------------------------------------------//
AppBase* AppBase::sm_pSingleton = 0;
//--------------------------------------------------------------------------------//

AppBase::AppBase()
: m_uiFlags(0)
{
	sm_pSingleton = this;
}

//--------------------------------------------------------------------------------//

AppBase::~AppBase()
{
	sm_pSingleton = 0;
}

//--------------------------------------------------------------------------------//

void AppBase::Execute()
{	
	while ((m_uiFlags & FLAGS_DESTROYED) == false)
	{
		if (OnUpdate() == false)
		{
			break;
		}
		OnRender();
	}
	OnDestroy();
}

//--------------------------------------------------------------------------------//

bool AppBase::Create(const char* cmdLine)
{
	if (OnCreate(cmdLine) == true)
	{
		m_uiFlags |= FLAGS_CREATED;
		return true;
	}
	return false;
}

//--------------------------------------------------------------------------------//

void AppBase::Destroy()
{
	m_uiFlags |= FLAGS_DESTROYED;
}

//--------------------------------------------------------------------------------//

bool AppBase::IsCreated()
{
	return m_uiFlags & FLAGS_CREATED;
}

//--------------------------------------------------------------------------------//