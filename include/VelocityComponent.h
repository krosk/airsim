#pragma once

class VelocityComponent
{
	public:
	const int uid;
	int velocityX;
	int velocityY;
	int velocityZ;
	int targetAngle;
	
	VelocityComponent(int id, int x, int y, int z, int r) : uid(id), velocityX(x), velocityY(y), velocityZ(z), targetAngle(r) {};
};