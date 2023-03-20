#include<iostream>

using namespace std;

class A
{
	int a,b;
	public:
	void get_details()
	{
		cout<<"Enter the details of a and b\n";
		cin>>a>>b;
	}
	//virtual 
	void display()
	{
		cout<<"Inside Parent class\n";
		cout<<"	a="<<a<<endl;
		cout<<"and b="<<b<<endl;
	}
};
class B:public A
{
	public:
	void display()
	{
		cout<<"Inside derived class"<<endl;
		//cout<<"	a="<<a<<endl;				//cannot call a and b here as they are private in base class
		//cout<<"and b="<<b<<endl;
	}
};

int main()
{
	B b;
	A a;
	
	//&b=a;
	//a=&b;
	
	//A *ptr1=&b;				//assigning address of derived class to base class pointer
	A *ptr1;
	ptr1=&b;
	//B *ptr2=&a;
	/*
	cout<<"ptr1 class get details \n";	
	ptr1->get_details();	//calling current function with reference of derived class (incorrect values will be taken)
	cout<<"ptr1 class display \n";	
	ptr1->display();		//calling current function with reference of derived class
							//derived function will be called beacuse of virtual keyword 
							//or else base function get called 1st priority
	cout<<"A class display \n";				
	a.display();			//normal A class function is called
	//ptr2->get_details();
	cout<<"A class get details\n";
	a.get_details();		//calling current function normally
	cout<<"A class get display\n";
	a.display();			//calling current function normally
	*/
	cout<<"object call\n";
	
	B d;
	A &c=d;			//assign while initialising otherwise it won't work
	//A c;			//this thing has error
	//&c=d;
	
	//&c=d;
	//b=&a;
	c.get_details();		
	c.display();
	d.display();
	
	
	
}
