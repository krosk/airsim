#include "MoveSystem.h"

#include <iostream>
#include <cmath>

void MoveSystem::update(int currentStep)
{
    const std::vector<int> &uidList = movementNode.uids();
	for(int i = 0; i < uidList.size(); i++)
	{
	    int uid = uidList.at(i);
		MovementNode &n = movementNode.get(uid);

		PositionComponent &p = n.position;
		VelocityComponent &v = n.velocity;
		const PositionTargetComponent &t = n.target;
		
		// estimate XY angle
		int deltaX = t.targetX - p.positionX;
		int deltaY = t.targetY - p.positionY;
		double pathRad = std::atan2(deltaY, deltaX);
		int pathR = (int) (pathRad * 180. / M_PI);
		int deltaR = deltaX != 0 || deltaY != 0 ? pathR - p.positionR :
		    t.targetR - p.positionR;
		if (deltaR <= -180)
		{
		    deltaR = -360 - deltaR;
		}
		else if (deltaR >= 180)
		{
		    deltaR = 360 - deltaR;
		}
		
		if (deltaX == 0 && deltaY == 0 && deltaR == 0)
		{
		    v.moving = false;
		    movementNode.remove(uid);
		    continue;
		}
		// move angular
		else if (std::abs(deltaR) > v.velocityR)
		{
		    v.moving = true;
		    p.positionR = deltaR > 0 ? p.positionR + v.velocityR :
		                  deltaR < 0 ? p.positionR - v.velocityR :
		                  pathR;
		}
		// move forward
		else
		{
		    v.moving = true;
		    p.positionR = pathR;
		    int newX = (int) (v.velocityFB * std::cos(pathRad));
		    if (std::abs(newX) > std::abs(deltaX))
		    {
		        newX = deltaX;
		    }
		    int newY = (int) (v.velocityFB * std::sin(pathRad));
		    if (std::abs(newY) > std::abs(deltaY))
		    {
		        newY = deltaY;
		    }
		    p.positionX += newX;
		    p.positionY += newY;
		}
		
		std::cout << p.positionX << " " << p.positionY 
		    << " " << p.positionR << "\n";
		std::cout << t.targetX << " " << t.targetY 
		    << " " << pathR << " " << deltaR << "\n";
	}
}