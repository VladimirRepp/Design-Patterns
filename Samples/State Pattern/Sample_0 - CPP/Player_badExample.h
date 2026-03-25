#pragma once

#include <string>
#include <iostream>
using namespace std;

// Пример плохого кода: много "если"
class Player_badExample
{
private:
	string m_strCurrentState;

public:
	void Update();
	void SetStrCurrentState(string new_strCurrentState);

	void StateDisplay();
};

