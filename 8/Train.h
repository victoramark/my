#pragma once
#include "Transport.h"

using namespace std;

class Train : public Transport {
public:
	int number;
	void InData(ifstream &ifst);
	void Out(ofstream &ofst);
};

class TrainFactory : public TransportFactory {
public:
	TrainFactory() : TransportFactory(2) { }

	Transport* Create(int key) {
		if (key == mark)
			return new Train;
		else
			return nullptr;
	}
};