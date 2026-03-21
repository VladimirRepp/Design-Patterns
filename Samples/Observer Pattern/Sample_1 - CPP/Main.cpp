#include <iostream>

#include "EnemyAI.h"
#include "PlayerSoundController.h"
#include "UI.h"
#include "HPBar.h"
#include "Player.h"

int main()
{
	srand(time(0));

	Player* player = new Player();

	HPObserver* enemyAI = new EnemyAI();
	HPObserver* playerSoundController = new PlayerSoundController();
	HPObserver* ui = new UI();
	HPObserver* hpBar = new HPBar();

	player->AddObserver(enemyAI);
	player->AddObserver(playerSoundController);
	player->AddObserver(ui);
	player->AddObserver(hpBar);

	// Имитация игрового жизненного цикла
	int hp_changed = 0;

	for (int i = 0; i < 10; i++) {
		cout << "Iteration #" << i + 1 << endl;

		hp_changed = rand() % 10;
		player->ChangeHP(hp_changed);
		player->DisplayHP();

		cout << endl;

		// Пример вывода: 
		/*  ------------------------------ -
			Log: EnemyAI called Update!
			EnemyAI State : easy
			------------------------------ -
			------------------------------ -
			Log : PlayerSoundController called Update!
			Heartbeat State : hard
			------------------------------ -
			------------------------------ -
			Log : UI called Update!
			UI Message : Attention!Replenish your health immediately.
			------------------------------ -
			------------------------------ -
			Log : HPBar called Update!
			HPBar changed!
			------------------------------ -
			HP : 5
		*/
	}
}
