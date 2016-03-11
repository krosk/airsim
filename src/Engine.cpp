#include "Engine.h"

#include <iostream>

Engine::Engine()
{
	positionComponentList.add(1, PositionComponent(2, 3, 4));

	std::cout << positionComponentList.contains(1);
	std::cout << positionComponentList.contains(2);
}