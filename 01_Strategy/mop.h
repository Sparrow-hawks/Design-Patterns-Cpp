#pragma once
#include "isoundable.h"
class Mop :
	public ISoundable
{
public:
	Mop();
	~Mop();

	void sound() override;
};

