#pragma once
#include "State.h"
class IdleState :
    public State
{
public:
	IdleState() { m_name = "IdleState"; }

	void Enter() override;
	void Execute() override;
	void Exit() override;
};

