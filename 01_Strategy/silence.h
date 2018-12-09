#pragma once
#include "isoundable.h"
class Silence :
	public ISoundable
{
public:
	Silence();
	~Silence();

	void sound() override;
};

