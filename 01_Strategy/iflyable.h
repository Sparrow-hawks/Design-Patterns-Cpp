#pragma once
class IFlyable
{
public:
	IFlyable();
	virtual ~IFlyable();

	virtual void fly() = 0;
};

