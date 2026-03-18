#include "LogisticsBySea.h"

LogisticsBySea::~LogisticsBySea()
{
	delete m_delivery_transport;
}

void LogisticsBySea::CreateTransport()
{
	m_delivery_transport = new Ship();
}

void LogisticsBySea::ExecuteDelivery()
{
	if (m_delivery_transport == nullptr) {
		cout << "Transport not set!" << endl;
		return;
	}

	m_delivery_transport->Delivery();
}
