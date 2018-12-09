#pragma once
#include "iflyable.h"
class BirdFly :
	public IFlyable
{
public:
	BirdFly();
	~BirdFly();

	void fly() override;
};

