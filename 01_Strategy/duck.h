#pragma once
#include "iflyable.h"
#include "isoundable.h"

#include <memory>

class Duck
{
private:
	std::unique_ptr<IFlyable> m_flyable;
	std::unique_ptr<ISoundable> m_soundable;

protected:
	void setFlyable(std::unique_ptr<IFlyable> flyable);
	void setSoundable(std::unique_ptr<ISoundable> soundable);

public:
	Duck();
	virtual ~Duck();

	void executeFly();
	void executeSound();

	virtual void show() = 0;
};

