#pragma once

class PositionComponent
{
	public:
	const int uid;
	int positionX;
	int positionY;
	int positionZ;
	int rotation;
	
	PositionComponent(int id, int x, int y, int z, int r) : uid(id), positionX(x), positionY(y), positionZ(z), rotation(r) {};
};