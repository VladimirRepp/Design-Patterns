#include <iostream>
using namespace std;

#include "LogisticByEarth.h"
#include "LogisticsBySea.h"

// Лор: Сейчас компания работает только с грузовиками, но в следующем 
// квартале планирует запустить морские перевозки с помощью кораблей.

// Задача: сделать приложение для голистики 
// необходимо, чтобы добавление нового способа доставки 
// не требовало изменения текущего кода 

int main()
{
	Logistics* logisticByEarth = new LogisticByEarth();
	logisticByEarth->CreateTransport();
	logisticByEarth->ExecuteDelivery();

	Logistics* logisticsBySea = new LogisticsBySea();
	logisticsBySea->ExecuteDelivery();

	logisticsBySea->CreateTransport();
	logisticsBySea->ExecuteDelivery();

	// Пример вывода:
	// Delivery by earth!
	// Transport not set!
	// Delivery by sea!

	system("pause");
}