#include "Transport.h"
#include "Airplane.h"
#include "Train.h"

namespace simple_container {
	Transport* Transport::In(ifstream &ifst) {
		Transport *a;
		int k;
		ifst >> k;
		switch (k) {
		case 1:
			a = new Airplane;
			break;
		case 2:
			a = new Train;
			break;
		default:
			throw invalid_argument("read an invalid string from the file!");
		}
		a->InData(ifst);
		return a;
	}
}