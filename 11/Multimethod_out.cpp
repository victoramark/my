#include "Multimethod_main.h"
#include "Container.h"

void Multimethod_Out(ofstream& ofst, List *lst)
{
	Node *ptr = lst->head;
	ofst << endl << "Start Multimethod out" << endl << endl;
	for (int i = 0; i < lst->len; i++, ptr = ptr->next) {
		Node *ptr2 = ptr;
		for (int j = 0; j < lst->len - i; j++, ptr2 = ptr2->next) {
			Multimethod_constructor::Multimethod_choose(ofst, ptr->data, ptr2->data);
			ptr->data->Out(ofst);
			ptr2->data->Out(ofst);
			ofst << endl;
		}
	}
	ofst << "End Multimethod out" << endl;
}
