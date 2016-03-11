#include "MoveSystem.h"

#include <iostream>

void MoveSystem::update(int currentStep)
{
	const std::vector<int> &positionKeys = positionComponentList.uids();
	const std::vector<int> &velocityKeys = velocityComponentList.uids();

	for(int i = 0; i < positionKeys.size(); i++)
	{
		int uid = positionKeys[i];

		PositionComponent &p = positionComponentList.get(uid);
		std::cout << p.positionX;
	}
}
