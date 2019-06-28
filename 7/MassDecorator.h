#pragma once
#include "Transport.h"

using namespace std;

class MassDecorator : public Transport {
public:
	Transport *parent;
	double weight;

	void InData(ifstream &ifst);
	void Out(ofstream &ofst);
	MassDecorator() {};
};

class MassDecoratorFactory : public TransportFactory {
public:
	MassDecoratorFactory() : TransportFactory(3) { }

	Transport* Create(int key) {
		if (key == mark)
			return new MassDecorator;
		else
			return nullptr;
	}
};