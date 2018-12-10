#include <iostream>

#include "duck.h"
#include "wildduck.h"
#include "rubberduck.h"

int main(int argc, char **argv)
{
	std::unique_ptr<Duck> pDuck = std::make_unique<WildDuck>();

	pDuck->show();
	pDuck->executeFly();
	pDuck->executeSound();

	return 0;
}