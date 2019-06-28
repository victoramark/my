#include "Train.h"

void Train::InData(ifstream &ifst) {
	ifst >> speed >> distance >> number;
}

void Train::Out(ofstream &ofst) {
	ofst << "This is a Train, its' speed is: " << speed << " distance: " << distance
		<< " number of wagons: " << number << "\n";
}

namespace {
	TrainFactory cf;
}
