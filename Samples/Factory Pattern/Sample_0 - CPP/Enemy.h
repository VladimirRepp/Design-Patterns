#pragma once

#include <iostream>
using namespace std;

class Enemy
{
public:
	virtual void Attack()  = 0;
	virtual ~Enemy() = default;
};

