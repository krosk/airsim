#pragma once

#include <vector>
#include <memory>

#include "PositionComponent.h"
#include "VelocityComponent.h"
#include "Container.h"
#include "MoveSystem.h"

class Engine
{
	private:
	Container<PositionComponent> positionComponentList;
	Container<VelocityComponent> velocityComponentList;

	MoveSystem moveSystem;

	void addDummyEntity(int uid);

	public:
	Engine();

	void update(int currentStep)
	{
		moveSystem.update(currentStep);
	}
};