#pragma once
#include "Transport.h"


namespace simple_container {
	class Train : public Transport {
	public:
		int number;

		void InData(ifstream &ifst);
		void Out(ofstream &ofst);
	};
}