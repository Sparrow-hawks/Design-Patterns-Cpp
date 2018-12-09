#include <iostream>

#include "rocketfly.h"
#include "silence.h"
#include "rubberduck.h"



RubberDuck::RubberDuck()
{
	Duck::setFlyable(new RocketFly());
	Duck::setSoundable(new Silence());
}


RubberDuck::~RubberDuck()
{
}


void RubberDuck::show()
{
	std::cout << "I'm a rubber duck!" << std::endl;
}
