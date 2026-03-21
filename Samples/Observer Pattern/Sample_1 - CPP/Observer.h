#pragma once
#include <iostream>
using namespace std;

class HPObserver
{
public:
	virtual void Update(int hp) = 0;
	virtual ~HPObserver() = default;
};

