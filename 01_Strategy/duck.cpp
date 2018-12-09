#include "duck.h"

Duck::Duck()
{
}


Duck::~Duck()
{
	delete m_flyable;
	delete m_soundable;
}


void Duck::setFlyable(IFlyable* flyable)
{
	m_flyable = flyable;
}


void Duck::setSoundable(ISoundable* soundable)
{
	m_soundable = soundable;
}


void Duck::executeFly()
{
	m_flyable->fly();
}


void Duck::executeSound()
{
	m_soundable->sound();
}
