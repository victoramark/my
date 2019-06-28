#include "Airplane.h"
#include "Train.h"
#include "Container.h"

double Parameter(Transport* a) {
	return (double)a->distance / (double)a->speed;
}

void OutParam(List* lst, ofstream &ofst) {
	Node *ptr = lst->head;
	for (int i = 0; i < lst->len; i++, ptr = ptr->next) {
		ofst << i << ": Parameter = " << Parameter(ptr->data) << endl;
	}
}
