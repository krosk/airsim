#pragma once

#include "Container.h"
#include "VelocityComponent.h"
#include "PositionComponent.h"
#include "PositionTargetComponent.h"
#include "ISystem.h"

class AiNodeAircraft
{
    public:
    AiNodeAircraft(
        int id,
        PositionComponent &p,
        PositionTargetComponent &t) :
        uid(id), position(p), target(t) {};
    const int uid;
    PositionComponent &position;
    PositionTargetComponent &target;
};

class AiSystemAircraft : public ISystem
{
	public:
	AiSystemAircraft() {};

	virtual void update(int currentStep) override;
    void addNode(AiNodeAircraft n) { aiNode.add(n.uid, n); }

	private:
	Container<AiNodeAircraft> aiNode;
};