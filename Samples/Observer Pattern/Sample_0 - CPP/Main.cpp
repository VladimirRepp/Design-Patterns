#include <iostream>

#include "SoundSystem.h"
#include "ScoreSystem.h"
#include "DataSystem.h"

#include "Coin.h"

// Задача: в игре (бесконенчый раннер) при событие "Монета собрана" нужно: 
// - включить звук собранной монеты 
// - увеличить счетчик собранных монет 
// - сохранить результат 

// Проблема: много систем должны реагировать на событие 
// Решение: паттерн наблюдатель 

Coin* GetCoin() {
	// Шанс успеха 
	int chance = rand() % 10;

	if (chance < 5)
		return nullptr;

	return new Coin();
}

int main()
{
	srand(time(0));

	Observer* soundSystem = new SoundSystem();
	Observer* scoreSystem = new ScoreSystem();
	Observer* dataSystem = new DataSystem();

	Coin* coin = nullptr;
	
	// Имитация игрового жизненного цикла 
	for (int i = 0; i < 10; i++)
	{
		cout << "Iteration #" << i + 1 << endl;

		coin = GetCoin();

		if (coin != nullptr)
		{
			soundSystem->Update();
			scoreSystem->Update();
			dataSystem->Update();
		}
		else {
			cout << "Coin not received!" << endl;
		}

		cout << endl;

		// Пример вывода одного цикла: 
		// - Событие "Монета получена": 
		// SoundSystem called Update!
		// ScoreSystem called Update!
		// DataSystem called Update!
		// - Иначе:
		// Coin not received!
	}

	delete soundSystem;
	delete scoreSystem;
	delete dataSystem;

	delete coin;
}