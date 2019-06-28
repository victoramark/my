#include "Transport.h"

TransportFactory *TransportFactory::top = nullptr;

TransportFactory::TransportFactory(int m) : mark(m) {
	this->next = top;
	top = this;
}

Transport* TransportFactory::Make(int key) {

	Transport* f = nullptr;
	TransportFactory* tmp = top;

	while (tmp) {
		f = tmp->Create(key);
		if (f) {
			f->mark = key;
			return f;
		}
		tmp = tmp->next;
	}
	return nullptr;

}

Transport* TransportFactory::In(ifstream &ifst) {

	Transport *ptr = nullptr;
	int k;
	ifst >> k;
	ptr = Make(k);
	if (ptr)
		ptr->InData(ifst);
	return ptr;

}
