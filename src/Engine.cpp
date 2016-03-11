#include "Engine.h"
#include "MoveSystem.h"

#include <iostream>


void Engine::addDummyEntity(int uid)
{
	positionComponentList.add(uid, PositionComponent(uid, 1, 1, 1, 0));
	velocityComponentList.add(uid, VelocityComponent(uid, 0, 0, 1, 0));
}

Engine::Engine() :
	moveSystem(MoveSystem(positionComponentList, velocityComponentList))
{
	addDummyEntity(1);
}