#pragma once

#include <vector>
#include <memory>

#include "PositionComponent.h"
#include "VelocityComponent.h"
#include "PositionTargetComponent.h"
#include "Container.h"
#include "MoveSystem.h"

class Engine
{
	private:
	Container<PositionComponent> positionComponentList;
	Container<VelocityComponent> velocityComponentList;
	Container<PositionTargetComponent> positionTargetComponentList;

	MoveSystem moveSystem;

	void addMovableEntity(int uid);
	void moveMovableEntity(int uid, int x, int y, int z, int r);

	public:
	Engine();

	void update(int currentStep)
	{
		moveSystem.update(currentStep);
	}
};