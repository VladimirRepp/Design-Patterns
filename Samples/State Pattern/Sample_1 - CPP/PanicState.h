#pragma once
#include "State.h"
class PanicState :
    public State
{
public:
    PanicState() { m_name = "PanicState"; }

    void Enter() override;
    void Update() override;
    void Exit() override;
};

