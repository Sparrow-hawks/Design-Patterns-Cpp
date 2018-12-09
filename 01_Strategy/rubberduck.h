#pragma once
#include "duck.h"
class RubberDuck :
	public Duck
{
public:
	RubberDuck();
	~RubberDuck();

	void show() override;
};

