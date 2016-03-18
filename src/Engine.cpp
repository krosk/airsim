#include "Engine.h"
#include "MoveSystem.h"

#include <iostream>


void Engine::addDummyEntity(int uid)
{
	PositionComponent &p = positionComponentList.add(uid, PositionComponent(uid, 1, 1, 1, 0));
	VelocityComponent &v = velocityComponentList.add(uid, VelocityComponent(uid, 1, 0, 0, 0));
	PositionTargetComponent &t = positionTargetComponentList.add(uid, PositionTargetComponent(uid, 5, 1, 1, 0));
	MovementNode n(uid, p, v, t);
	moveSystem.addNode(n);
}

Engine::Engine() :
	moveSystem(MoveSystem())
{
	addDummyEntity(1);
}