#include "Container.h"

List::List() : len(0) { }

void List::Clear()
{
	Node *ptr = head, *ptr2;
	for (int i = 0; i <= len-1; i++) {
		if (i != len-1)
			ptr2 = ptr->next;
		delete(ptr);
		ptr = ptr2;
	}
	len = 0;
}

void List::In(ifstream &ifst) {

	while (!ifst.eof()) {
		Node *el = new Node();
		if ((el->data = TransportFactory::In(ifst)) != 0) {
			len++;
		}
		if (len == 1) {
			head = el;
		}
		else {
			tail->next = el;
			el->prev = tail;
			el->next = head;
		}
		tail = el;
		head->prev = tail;
	}
}

void List::Out(ofstream &ofst) {

	Node *ptr = head;
	ofst << "List contents " << len << " elements." << endl;
	for (int i = 0; i < len; i++, ptr = ptr->next) {
		ofst << i << ": ";
		ptr->data->Out(ofst);
	}

}
