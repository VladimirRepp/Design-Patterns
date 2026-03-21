#pragma once
#include <vector>
#include <algorithm>

#include "Observer.h"

class Player
{
private:
	int m_hp;
	vector<HPObserver*> m_observers;
	
	void Notify();

public:
	Player();
	Player(int hp);
	~Player();

	void AddObserver(HPObserver* observer);
	void RemoveObserver(HPObserver* observer);
	void ClearObservers();

	void ChangeHP(int new_hp);
	void DisplayHP();
};

