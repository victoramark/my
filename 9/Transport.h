#pragma once
#include <fstream>

using namespace std;

class Transport {
public:
	virtual void InData(ifstream &ifst) = 0;
	virtual void Out(ofstream &ofst) = 0;
	virtual ~Transport() {}
	int mark, speed, distance;
};

class TransportFactory {
public:
	TransportFactory(int m);
	static Transport* Make(int key);
	static Transport* In(ifstream &ifst);
	virtual Transport* Create(int key) = 0;
	static TransportFactory* top;
	TransportFactory* next;
protected:
	int mark;
};