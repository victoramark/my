#include "Multimethod_ADD_Functions.h"

void Multimethod_Ship_Ship::Multimethod_body(ofstream &ofst)
{
	ofst<<"This pair is Ship with Ship"<<endl;
}

namespace
{
	Multimethod_Ship_Ship_constructor mtrtrc;
}


void Multimethod_Ship_Air::Multimethod_body(ofstream &ofst)
{
	ofst<<"This pair is Ship with Airplane"<<endl;
}

namespace
{
	Multimethod_Ship_Air_constructor mtrtc;
}


void Multimethod_Ship_Train::Multimethod_body(ofstream &ofst)
{
	ofst<<"This pair is Ship with Train"<<endl;
}

namespace
{
	Multimethod_Ship_Train_constructor mtrdc;
}


void Multimethod_Air_Ship::Multimethod_body(ofstream &ofst)
{
	ofst<<"This pair is Airplane with Ship"<<endl;
}

namespace
{
	Multimethod_Air_Ship_constructor mttrc;
}

void Multimethod_Train_Ship::Multimethod_body(ofstream &ofst)
{
	ofst<<"This pair is Train with Ship"<<endl;
}

namespace
{
	Multimethod_Train_Ship_constructor mdtrc;
}