#include "Container.h"

double Parameter(Transport* a);

void Sort(List *lst) {
	Node *ptr1 = lst->head, *ptr2;
	for (int i = 0; i < lst->len; i++, ptr1 = ptr1->next) {
		Node *ptrprev = ptr1->prev;
		for (ptr2 = ptr1->next; ptr2 != lst->head; ptr2 = ptr2->next) {
			if (Parameter(ptr2->data) < Parameter(ptr1->data)) {
				if (ptr2 == lst->tail) {
					lst->tail = ptr1;
				}
				if (ptr1 == lst->head) {
					lst->head = ptr2;
				}
				ptrprev->next = ptr2;
				if (ptrprev->prev == ptr2) {
					ptrprev->prev = ptr1;
				}
				Node *ptrnext = ptr2->next;
				ptrnext->prev = ptr1;
				ptr1->next = ptr2->next;
				ptr1->prev = ptr2;
				ptr2->next = ptr1;
				ptr2->prev = ptrprev;
				ptrprev = ptrprev->next;
			}
			else {
				ptrprev = ptrprev->next;
				ptr1 = ptr1->next;
				ptr2 = ptr1;
			}
		}
	}
}