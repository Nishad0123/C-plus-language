#include<iostream>
using namespace std;

class Demo
{

private:
	int a , b;

public:
	Demo()
	{
		cout<<"Default Constructor is called"<<endl;
	};

	Demo(int var1)
	{
		a=var1;
		cout<<"Parameterised Constructor no.:"<<a<<" is called"<<endl;
	};

	int add(int var2);
};

int Demo::add(int var2)
{
	//var2++;
	return a+var2;
}

int main()
{
	Demo obj1;
	int late=15;
	
	Demo obj2(77);
	late=obj2.add(45);
cout<<"the addition is "<<late<<endl;
	return 0;
}

