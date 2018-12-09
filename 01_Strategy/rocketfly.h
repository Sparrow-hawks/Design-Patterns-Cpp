#pragma once
#include "iflyable.h"
class RocketFly :
	public IFlyable
{
public:
	RocketFly();
	~RocketFly();

	void fly() override;
};

