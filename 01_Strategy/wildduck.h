#pragma once
#include "duck.h"
class WildDuck :
	public Duck
{
public:
	WildDuck();
	~WildDuck();

	void show() override;
};

