#include "duck.h"

Duck::Duck()
{
}


Duck::~Duck()
{

}


void Duck::setFlyable(std::unique_ptr<IFlyable> flyable)
{
	m_flyable = std::move(flyable);
}


void Duck::setSoundable(std::unique_ptr<ISoundable> soundable)
{
	m_soundable = std::move(soundable);
}


void Duck::executeFly()
{
	m_flyable->fly();
}


void Duck::executeSound()
{
	m_soundable->sound();
}
