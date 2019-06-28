#include "Multimethod_Functions.h"

void Multimethod_Air_Air::Multimethod_body(ofstream &ofst)
{
	ofst<<"This pair is Airplane with Airplane"<<endl;
}

namespace
{
	Multimethod_Air_Air_constructor mttc;
}

void Multimethod_Air_Train::Multimethod_body(ofstream &ofst)
{
	ofst<<"This pair is Airplane with Train"<<endl;
}

namespace
{
	Multimethod_Air_Train_constructor mtdc;
}


void Multimethod_Train_Air::Multimethod_body(ofstream &ofst)
{
	ofst<<"This pair is Train with Airplane"<<endl;
}

namespace
{
	Multimethod_Train_Air_constructor mdtc;
}

void Multimethod_Train_Train::Multimethod_body(ofstream &ofst)
{
	ofst<<"This pair is Train with Train"<<endl;
}

namespace
{
	Multimethod_Train_Train_constructor mddc;
}