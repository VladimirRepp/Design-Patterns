#pragma once
#include "State.h"
class RunState :
    public State
{
public:
	RunState() { m_name = "RunState"; }

	void Enter() override;
	void Execute() override;
	void Exit() override;
};

