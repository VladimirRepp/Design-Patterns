#pragma once
#include "State.h"
class CalmState :
    public State
{
public:
    CalmState() { m_name = "CalmState"; }

    void Enter() override;
    void Update() override;
    void Exit() override;
};