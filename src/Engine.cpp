#include "Engine.h"
#include "MoveSystem.h"

#include <iostream>


void Engine::addDummyEntity(int uid)
{
	PositionComponent &p = positionComponentList.add(uid, PositionComponent(uid, 0, 0, 0, 0));
	VelocityComponent &v = velocityComponentList.add(uid, VelocityComponent(uid, 5, 30));
	PositionTargetComponent &t = positionTargetComponentList.add(uid, PositionTargetComponent(uid, -30, -30, 0, 0));
	MovementNode n(uid, p, v, t);
	moveSystem.addNode(n);
}

Engine::Engine() :
	moveSystem(MoveSystem())
{
    for(int i = 1; i < 2; i++)
    {
        addDummyEntity(i);
    }
}