#pragma once
#include "State.h"
class AggressiveState :
    public State
{
public:
    AggressiveState() { m_name = "AggressiveState"; }

    void Enter() override;
    void Update() override;
    void Exit() override;
};

