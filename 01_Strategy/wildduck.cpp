#include <iostream>

#include "birdfly.h"
#include "mop.h"
#include "wildduck.h"



WildDuck::WildDuck()
{
	Duck::setFlyable(std::make_unique<BirdFly>());
	Duck::setSoundable(std::make_unique<Mop>());
}


WildDuck::~WildDuck()
{
}


void WildDuck::show()
{
	std::cout << "I'm a wild duck!" << std::endl;
}