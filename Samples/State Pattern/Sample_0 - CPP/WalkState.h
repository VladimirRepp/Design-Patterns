#pragma once
#include "State.h"
class WalkState :
    public State
{
public:
	WalkState() { m_name = "WalkState"; }

	void Enter() override;
	void Execute() override;
	void Exit() override;
};

