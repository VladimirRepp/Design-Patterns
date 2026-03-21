#include "Player.h"

Player::Player()
{
	m_hp = 0;
	m_observers.clear();
}

Player::Player(int hp)
{
	m_hp = hp;
	m_observers.clear();
}

Player::~Player()
{
	m_observers.clear();
}

void Player::Notify()
{
	for (auto o : m_observers)
		o->Update(m_hp);
}

void Player::AddObserver(HPObserver* observer)
{
	m_observers.push_back(observer);
}

void Player::RemoveObserver(HPObserver* observer)
{
	m_observers.erase(remove(m_observers.begin(), m_observers.end(), observer), m_observers.end());
}

void Player::ClearObservers()
{
	m_observers.clear();
}

void Player::ChangeHP(int new_hp)
{
	if (new_hp == m_hp)
		return;

	m_hp = new_hp;
	Notify();
}

void Player::DisplayHP()
{
	cout << "HP: " << m_hp << endl;
}
