#include "Ship.h"

void Ship::InData(ifstream &ifst) {
	ifst >> speed >> distance >> displacement >> type;
}

void Ship::Out(ofstream &ofst) {
	Type t = static_cast<Type>(type);
	ofst << "This is a Ship, its' speed is: " << speed
		<< " water displacement: " << displacement << " type: " << t << "\n";
}
namespace {
	ShipFactory ff;
}
