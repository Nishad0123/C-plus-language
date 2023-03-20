#include <iostream>
using namespace std;

class Base {
   public:
    virtual void print() 				//if virtual is not used then derived class function will be called
	{
        cout << "Base Function" << endl;
    }
};

class Derived : public Base 
{
   public:
    void print() 
	{
        cout << "Derived Function" << endl;
    }
};

int main() 
{
    Derived derived1;

    // pointer of Base type that points to derived1
    Base* ptr = &derived1;

    // call function of Base class using ptr
    ptr->print();

    return 0;
}