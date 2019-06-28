#pragma once
#include <fstream>

using namespace std;


namespace simple_container {
	class Transport {
	public:
		static Transport* In(ifstream &ifst);
		virtual void InData(ifstream &ifst) = 0;
		virtual void Out(ofstream &ofst) = 0;
		int speed, distance;
	};
}