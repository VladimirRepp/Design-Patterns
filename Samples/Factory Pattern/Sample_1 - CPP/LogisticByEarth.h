#pragma once
#include "Logistics.h"

// Конкретная фабрика
class LogisticByEarth :
    public Logistics
{
public:
	~LogisticByEarth();

	void CreateTransport() override;
	void ExecuteDelivery() override;
};

