#include "AiSystemAircraft.h"

#include <iostream>
#include <cmath>

void AiSystemAircraft::update(int currentStep)
{
    const std::vector<int> &uidList = aiNode.uids();
	for(int i = 0; i < uidList.size(); i++)
	{
	    int uid = uidList.at(i);
		AiNodeAircraft &n = aiNode.get(uid);

		PositionComponent &p = n.position;
		PositionTargetComponent &t = n.target;
		
		std::cout << p.positionX << " " << p.positionY 
		    << " " << p.positionR << "\n";
	}
}