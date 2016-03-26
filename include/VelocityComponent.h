#pragma once

class VelocityComponent
{
	public:
	const int uid;
	int velocityFB;
	int velocityR;
	
	VelocityComponent(int id, int fb, int r) : uid(id), velocityFB(fb), velocityR(r) {};
};