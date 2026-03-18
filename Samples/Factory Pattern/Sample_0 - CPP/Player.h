#pragma once
class Player
{
private:
	int m_level;

public:
	Player(int level){ m_level = level; }
	~Player(){}

	void SetLevel(int new_level) { m_level = new_level;	}
	int GetLevel() { return m_level; }
};

