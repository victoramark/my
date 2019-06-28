#pragma once
#include "Transport.h"

using namespace std;

class Ship : public Transport {
public:
	int displacement, type;
	enum Type { liner, buksir, tanker };
	void InData(ifstream &ifst);
	void Out(ofstream &ofst);
};

class ShipFactory : public TransportFactory {
public:
	ShipFactory() : TransportFactory(3) { }

	Transport* Create(int key) {
		if (key == mark)
			return new Ship;
		else
			return nullptr;
	}
};