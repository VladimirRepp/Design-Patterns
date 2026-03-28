#pragma once
#include <string>
#include "Enemy.h"
using namespace std;

class Enemy;
class State
{
protected:
	Enemy* m_enemy = nullptr;
	string m_name;

public:
	virtual ~State() = default;

	virtual void Enter() = 0;
	virtual void Update() = 0;
	virtual void Exit() = 0;

	virtual string GetName() { return m_name; }
	virtual void SetEnemy(Enemy* new_enemy) {
		if(m_enemy)
			delete m_enemy;
		
		m_enemy = new_enemy; }
};

