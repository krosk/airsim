#include "Engine.h"

#include <iostream>

Engine::Engine()
{
	positionComponentList.add(1, PositionComponent(1, 2, 3, 4));

	std::cout << positionComponentList.contains(1) << "\n";
	std::cout << positionComponentList.contains(2) << "\n";
	PositionComponent &component = positionComponentList.get(1);
	component.positionZ = 6;
	PositionComponent &component2 = positionComponentList.get(1);
	std::cout << component2.positionZ << "\n";
	positionComponentList.remove(1);
	std::cout << positionComponentList.contains(1) << "\n";
}