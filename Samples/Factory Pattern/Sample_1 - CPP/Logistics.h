#pragma once
#include "Transport.h"
#include "Ship.h"
#include "Truck.h"

// Фабрика
class Logistics
{
protected:
	Transport* m_delivery_transport;

public: 
	virtual ~Logistics() = default;

	Transport* GetTransport() {	return m_delivery_transport;	};
	virtual void CreateTransport() = 0;
	virtual void ExecuteDelivery() = 0;
};

