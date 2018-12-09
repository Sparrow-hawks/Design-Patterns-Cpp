#pragma once
#include "iflyable.h"
#include "isoundable.h"

class Duck
{
private:
	IFlyable* m_flyable;
	ISoundable* m_soundable;

protected:
	void setFlyable(IFlyable* flyable);
	void setSoundable(ISoundable* soundable);

public:
	Duck();
	virtual ~Duck();

	void executeFly();
	void executeSound();

	virtual void show() = 0;
};

