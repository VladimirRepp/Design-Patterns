#include "PlayerSoundController.h"

void PlayerSoundController::Update(int hp)
{
	cout << "-------------------------------" << endl;
	cout << "Log: PlayerSoundController called Update!" << endl;

	if (hp < 20)
		cout << "Heartbeat State: hard" << endl;
	else if (hp >= 20 && hp < 80)
		cout << "Heartbeat State: midle" << endl;
	else
		cout << "Heartbeat State: easy" << endl;
	cout << "-------------------------------" << endl;
}
