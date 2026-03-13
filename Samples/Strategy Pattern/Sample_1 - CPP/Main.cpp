#include "Enemy.h"
#include "WalkMove.h"
#include "RunMove.h"
#include "FlyMove.h"

#include <iostream>
using namespace std;

int main()
{	
	Enemy e;

	e.Move();

	e.SetMoveStrategy(new WalkMove());
	e.Move();

	e.SetMoveStrategy(new RunMove());
	e.Move();

	e.SetMoveStrategy(new FlyMove());
	e.Move();

	system("pause");
}
