#pragma once
#include "Transport.h"

namespace simple_container {
	struct Node {
		Node *next, *prev;
		Transport *data;
	};

	class List {
	public:
		Node *head, *tail;
		int len;
		void In(ifstream &ifst);
		void Out(ofstream &ofst);
		List();
		~List();
	};
}