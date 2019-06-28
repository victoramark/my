#pragma once
#include "Multimethod_main.h"

class Multimethod_Air_Air: public Multimethod_main
{
	public:
		void Multimethod_body(ofstream &ofst);
    	Multimethod_Air_Air() {};
};

class Multimethod_Air_Air_constructor: public Multimethod_constructor
{
	public:
		Multimethod_Air_Air_constructor():Multimethod_constructor(1,1) { }

		Multimethod_main* Create(int key_one,int key_two)
		{
			if(key_one == multimethod_type_one && key_two == multimethod_type_two)
				return new Multimethod_Air_Air;
			else
				return nullptr;
		}
};

class Multimethod_Air_Train: public Multimethod_main
{
	public:
		void Multimethod_body(ofstream &ofst);
    	Multimethod_Air_Train() {};
};

class Multimethod_Air_Train_constructor: public Multimethod_constructor
{
	public:
		Multimethod_Air_Train_constructor():Multimethod_constructor(1,2) { }

		Multimethod_main* Create(int key_one,int key_two)
		{
			if(key_one == multimethod_type_one && key_two == multimethod_type_two)
				return new Multimethod_Air_Train;
			else
				return nullptr;
		}
};

class Multimethod_Train_Air: public Multimethod_main
{
	public:
		void Multimethod_body(ofstream &ofst);
    	Multimethod_Train_Air() {};
};

class Multimethod_Train_Air_constructor: public Multimethod_constructor
{
	public:
		Multimethod_Train_Air_constructor():Multimethod_constructor(2,1) { }

		Multimethod_main* Create(int key_one,int key_two)
		{
			if(key_one == multimethod_type_one && key_two == multimethod_type_two)
				return new Multimethod_Train_Air;
			else
				return nullptr;
		}
};

class Multimethod_Train_Train: public Multimethod_main
{
	public:
		void Multimethod_body(ofstream &ofst);
    	Multimethod_Train_Train() {};
};

class Multimethod_Train_Train_constructor: public Multimethod_constructor
{
	public:
		Multimethod_Train_Train_constructor():Multimethod_constructor(2,2) { }

		Multimethod_main* Create(int key_one,int key_two)
		{
			if(key_one == multimethod_type_one && key_two == multimethod_type_two)
				return new Multimethod_Train_Train;
			else
				return nullptr;
		}
};