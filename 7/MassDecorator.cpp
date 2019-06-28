#include "MassDecorator.h"

void MassDecorator::InData(ifstream &ifst) {
	ifst >> weight;
	int kt;
	parent = NULL;
	ifst >> kt;
	TransportFactory* tmp = TransportFactory::top;
	while (tmp) {
		parent = tmp->Create(kt);
		if (parent) {
			parent->InData(ifst);
			return;
		}
		tmp = tmp->next;
	}

}

void MassDecorator::Out(ofstream &ofst) {
	parent->Out(ofst);
	ofst << "Weight: " << weight << endl;
}

namespace
{
	MassDecoratorFactory ndf;
}
