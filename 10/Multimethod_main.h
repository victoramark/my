#pragma once
#include <fstream>
#include "Transport.h"

using namespace std;

class Multimethod_main
{
public:
	virtual void Multimethod_body(ofstream &ofst) = 0;
};

class Multimethod_constructor
{
public:
	int multimethod_type_one;
	int multimethod_type_two;
	static Multimethod_constructor* top;
	Multimethod_constructor* next;
	Multimethod_constructor(int one,int two);
	static Multimethod_main* Multimethod_choose(ofstream &ofst, Transport* elem_one, Transport* elem_two);
    virtual Multimethod_main* Create(int key_one,int key_two) = 0;
};
