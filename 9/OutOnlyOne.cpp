#include "Container.h"

template <class Type>
void OutOnlyOne(List *lst, ofstream &ofst) {
	ofst << "List contents " << lst->len << " elements." << endl;
	ofst << "Outputting only " << typeid(Type).name() << endl;
	Node *ptr = lst->head;
	Type* something;
	for (int i = 0; i < lst->len; i++, ptr = ptr->next) {
		if ((something = dynamic_cast<Type*>(ptr->data)) != nullptr) {
			ptr->data->Out(ofst);
		}
	}
}