#pragma once
#include "IMove.h"

#include <string>
using namespace std;

class Enemy
{
private:
	IMove* moveStrategy;

public:
	Enemy(){}
	~Enemy() { delete moveStrategy; }

	void SetMoveStrategy(IMove* moveStrategy);
	void Move();

	void Move(string type);
};

