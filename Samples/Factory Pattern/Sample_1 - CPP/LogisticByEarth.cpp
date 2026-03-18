#include "LogisticByEarth.h"

LogisticByEarth::~LogisticByEarth()
{
	delete m_delivery_transport;
}

void LogisticByEarth::CreateTransport()
{
	m_delivery_transport = new Truck();
}

void LogisticByEarth::ExecuteDelivery()
{
	if (m_delivery_transport == nullptr) {
		cout << "Transport not set!" << endl;
		return;
	}

	m_delivery_transport->Delivery();
}
