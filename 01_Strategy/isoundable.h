#pragma once
class ISoundable
{
public:
	ISoundable();
	virtual ~ISoundable();

	virtual void sound() = 0;
};

