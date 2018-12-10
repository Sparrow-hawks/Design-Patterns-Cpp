#include <iostream>

#include "rocketfly.h"
#include "silence.h"
#include "rubberduck.h"



RubberDuck::RubberDuck()
{
	Duck::setFlyable(std::make_unique<RocketFly>());
	Duck::setSoundable(std::make_unique<Silence>());
}


RubberDuck::~RubberDuck()
{
}


void RubberDuck::show()
{
	std::cout << "I'm a rubber duck!" << std::endl;
}
