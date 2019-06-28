#pragma once
#include "Transport.h"

namespace simple_container {
	class Airplane : public Transport {
	public:
		int distanceofflight, weight;

		void InData(ifstream &ifst);
		void Out(ofstream &ofst);
	};
}