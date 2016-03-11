#pragma once

#include <vector>
#include <memory>

#include "PositionComponent.h"
#include "Container.h"

class Engine
{
	private:
	Container<PositionComponent> positionComponentList;
	
	public:
	Engine();
};