#pragma once

#include "Container.h"
#include "VelocityComponent.h"
#include "PositionComponent.h"
#include "ISystem.h"

class MoveSystem : public ISystem
{
	public:
	MoveSystem(Container<PositionComponent> &position, Container<VelocityComponent> &velocity) : positionComponentList(position), velocityComponentList(velocity) {};

	virtual void update(int currentStep) override;

	private:
	Container<PositionComponent> &positionComponentList;
	Container<VelocityComponent> &velocityComponentList;
};