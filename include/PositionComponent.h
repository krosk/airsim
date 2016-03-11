#pragma once

class PositionComponent
{
	public:
	const int uid;
	int positionX;
	int positionY;
	int positionZ;
	
	PositionComponent(int id, int x, int y, int z) : uid(id), positionX(x), positionY(y), positionZ(z) {};
};