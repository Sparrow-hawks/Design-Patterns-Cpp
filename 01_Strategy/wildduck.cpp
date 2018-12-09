#include <iostream>

#include "birdfly.h"
#include "mop.h"
#include "wildduck.h"



WildDuck::WildDuck()
{
	Duck::setFlyable(new BirdFly());
	Duck::setSoundable(new Mop());
}


WildDuck::~WildDuck()
{
}


void WildDuck::show()
{
	std::cout << "I'm a wild duck!" << std::endl;
}