#include "Airplane.h"

void Airplane::InData(ifstream &ifst) {
	ifst >> speed >> distance >> distanceofflight >> weight;
}

void Airplane::Out(ofstream &ofst) {
	ofst << "This is a Airplane, its' speed is: " << speed
		<< " distance: " << distance << " distance of flight " << distanceofflight
		<< " weight of cargo: " << weight << "\n";
}
namespace {
	AirplaneFactory ff;
}
