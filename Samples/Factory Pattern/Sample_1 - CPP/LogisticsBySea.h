#pragma once
#include "Logistics.h"

//  онкретна€ фабрика
// ƒобавление новой не требует изменение текущего кода
class LogisticsBySea :
    public Logistics
{
public:
	~LogisticsBySea();

	void CreateTransport() override;
	void ExecuteDelivery() override;
};

