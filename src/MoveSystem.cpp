#include "MoveSystem.h"

#include <iostream>

void MoveSystem::update(int currentStep)
{
    const std::vector<int> &uidList = movementNode.uids();
	for(int i = 0; i < uidList.size(); i++)
	{
		MovementNode &n = movementNode.get(uidList.at(i));

		PositionComponent &p = n.position;
		const VelocityComponent &v = n.velocity;
		p.positionX += v.velocityX;
		std::cout << p.positionX << "\n";
	}
}