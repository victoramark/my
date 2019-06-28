#pragma once
#include "Transport.h"

struct Node {
public:
	Node *next, *prev;
	Transport *data;
};

class List {
public:
	int len;
	Node *head, *tail;
	void In(ifstream &ifst);
	void Out(ofstream &ofst);
	void Clear();
	List();
	~List() { Clear(); }
};