#include "MoveSystem.h"

#include <iostream>
#include <cmath>

void MoveSystem::update(int currentStep)
{
    const std::vector<int> &uidList = movementNode.uids();
	for(int i = 0; i < uidList.size(); i++)
	{
		MovementNode &n = movementNode.get(uidList.at(i));

		PositionComponent &p = n.position;
		const VelocityComponent &v = n.velocity;
		const PositionTargetComponent &t = n.target;
		
		// estimate XY angle
		int deltaX = t.targetX - p.positionX;
		int deltaY = t.targetY - p.positionY;
		double pathRad = std::atan2(deltaY, deltaX);
		int pathR = (int) (pathRad * 180. / M_PI);
		int deltaR = pathR - p.positionR;
		if (deltaR <= -180)
		{
		    deltaR = -360 - deltaR;
		}
		else if (deltaR >= 180)
		{
		    deltaR = 360 - deltaR;
		}
		
		// move
		if (std::abs(deltaR) > v.velocityR)
		{
		    p.positionR = deltaR > 0 ? p.positionR + v.velocityR :
		                  deltaR < 0 ? p.positionR - v.velocityR :
		                  pathR;
		}
		else
		{
		    p.positionR = pathR;
		    p.positionX += (int) (v.velocityFB * std::cos(pathRad));
		    p.positionY += (int) (v.velocityFB * std::sin(pathRad));
		}
		
		std::cout << p.positionX << " " << p.positionY 
		    << " " << p.positionR << "\n";
		std::cout << t.targetX << " " << t.targetY 
		    << " " << pathR << "\n";
	}
}