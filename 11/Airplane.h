#pragma once
#include "Transport.h"

using namespace std;

class Airplane : public Transport {
public:
	int distanceofflight, weight;
	void InData(ifstream &ifst);
	void Out(ofstream &ofst);
};

class AirplaneFactory : public TransportFactory {
public:
	AirplaneFactory() : TransportFactory(1) { }

	Transport* Create(int key) {
		if (key == mark)
			return new Airplane;
		else
			return nullptr;
	}
};