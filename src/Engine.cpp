#include "Engine.h"
#include "MoveSystem.h"

#include <iostream>


void Engine::addMovableEntity(int uid)
{
	PositionComponent &p = positionComponentList.add(uid, PositionComponent(uid, 0, 0, 0, 0));
	VelocityComponent &v = velocityComponentList.add(uid, VelocityComponent(uid, 10, 45));
	PositionTargetComponent &t = positionTargetComponentList.add(uid, PositionTargetComponent(uid, 0, 0, 0, 0));
}

void Engine::moveMovableEntity(int uid,
    int x, int y, int z, int r)
{
    PositionComponent &p = positionComponentList.get(uid);
	VelocityComponent &v = velocityComponentList.get(uid);
	PositionTargetComponent &t = positionTargetComponentList.add(uid, PositionTargetComponent(uid, x, y, z, r));
	MovementNode n(uid, p, v, t);
	moveSystem.addNode(n);
}

Engine::Engine() :
	moveSystem(MoveSystem())
{
    for(int i = 1; i < 2; i++)
    {
        addMovableEntity(i);
    }
    
    moveMovableEntity(1, 100, 50, 0, 60);
}