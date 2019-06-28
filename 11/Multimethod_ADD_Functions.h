#pragma once
#include "Multimethod_main.h"


class Multimethod_Ship_Ship: public Multimethod_main
{
	public:
		void Multimethod_body(ofstream &ofst);
    	Multimethod_Ship_Ship() {};
};

class Multimethod_Ship_Ship_constructor: public Multimethod_constructor
{
	public:
		Multimethod_Ship_Ship_constructor():Multimethod_constructor(3,3) { }

		Multimethod_main* Create(int key_one,int key_two)
		{
			if(key_one == multimethod_type_one && key_two == multimethod_type_two)
				return new Multimethod_Ship_Ship;
			else
				return nullptr;
		}
};


class Multimethod_Ship_Air: public Multimethod_main
{
	public:
		void Multimethod_body(ofstream &ofst);
    	Multimethod_Ship_Air() {};
};

class Multimethod_Ship_Air_constructor: public Multimethod_constructor
{
	public:
		Multimethod_Ship_Air_constructor():Multimethod_constructor(3,1) { }

		Multimethod_main* Create(int key_one,int key_two)
		{
			if(key_one == multimethod_type_one && key_two == multimethod_type_two)
				return new Multimethod_Ship_Air;
			else
				return nullptr;
		}
};

class Multimethod_Ship_Train: public Multimethod_main
{
	public:
		void Multimethod_body(ofstream &ofst);
    	Multimethod_Ship_Train() {};
};

class Multimethod_Ship_Train_constructor: public Multimethod_constructor
{
	public:
		Multimethod_Ship_Train_constructor():Multimethod_constructor(3,2) { }

		Multimethod_main* Create(int key_one,int key_two)
		{
			if(key_one == multimethod_type_one && key_two == multimethod_type_two)
				return new Multimethod_Ship_Train;
			else
				return nullptr;
		}
};

class Multimethod_Air_Ship: public Multimethod_main
{
	public:
		void Multimethod_body(ofstream &ofst);
    	Multimethod_Air_Ship() {};
};

class Multimethod_Air_Ship_constructor: public Multimethod_constructor
{
	public:
		Multimethod_Air_Ship_constructor():Multimethod_constructor(1,3) { }

		Multimethod_main* Create(int key_one,int key_two)
		{
			if(key_one == multimethod_type_one && key_two == multimethod_type_two)
				return new Multimethod_Air_Ship;
			else
				return nullptr;
		}
};


class Multimethod_Train_Ship: public Multimethod_main
{
	public:
		void Multimethod_body(ofstream &ofst);
    	Multimethod_Train_Ship() {};
};

class Multimethod_Train_Ship_constructor: public Multimethod_constructor
{
	public:
		Multimethod_Train_Ship_constructor():Multimethod_constructor(2,3) { }

		Multimethod_main* Create(int key_one,int key_two)
		{
			if(key_one == multimethod_type_one && key_two == multimethod_type_two)
				return new Multimethod_Train_Ship;
			else
				return nullptr;
		}
};