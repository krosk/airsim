#pragma once

#include "Container.h"
#include "VelocityComponent.h"
#include "PositionComponent.h"
#include "PositionTargetComponent.h"
#include "ISystem.h"

class MovementNode
{
    public:
    MovementNode(int id, PositionComponent &p, VelocityComponent &v, const PositionTargetComponent &t) :
        uid(id), position(p), velocity(v), target(t) {};
    const int uid;
    PositionComponent &position;
    VelocityComponent &velocity;
    const PositionTargetComponent &target;
};

class MoveSystem : public ISystem
{
	public:
	MoveSystem() {};

	virtual void update(int currentStep) override;
    void addNode(MovementNode n) { movementNode.add(n.uid, n); }

	private:
	Container<MovementNode> movementNode;
};