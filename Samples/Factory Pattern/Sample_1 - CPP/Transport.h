#pragma once
#include <iostream>
using namespace std;

class Transport
{
public:
    virtual void Delivery() = 0;
    virtual ~Transport() = default;
};

