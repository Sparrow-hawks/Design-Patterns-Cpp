#include <iostream>

#include "duck.h"
#include "wildduck.h"
#include "rubberduck.h"

int main(int argc, char **argv)
{
	Duck *pDuck = new WildDuck();

	pDuck->show();
	pDuck->executeFly();
	pDuck->executeSound();

	std::cin.get();

	return 0;
}