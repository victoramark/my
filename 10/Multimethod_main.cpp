#include"Multimethod_main.h"

Multimethod_constructor* Multimethod_constructor::top = nullptr;
Multimethod_constructor::Multimethod_constructor(int m, int k): multimethod_type_one(m),multimethod_type_two(k)
{
    this->next = top;
    top = this;
}

Multimethod_main* Multimethod_constructor::Multimethod_choose(ofstream &ofst, Transport* elem_one, Transport* elem_two)
{
    int one = elem_one->mark;
    int two = elem_two->mark;

    Multimethod_main *cur=NULL;
    Multimethod_constructor* tmp = top;
    while (tmp)
    {
        cur = tmp->Create(one,two);
        if(cur)
        {
        	cur->Multimethod_body(ofst);
        	return cur;
        }
        tmp = tmp->next;
    }
    return cur;
}

