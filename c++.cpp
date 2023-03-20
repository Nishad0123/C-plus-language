#include<iostream>

int var = 20;
namespace outer
{
	int var = 10;		
	namespace inner
	{
		int var2 = var; // this x refers to outer::x
	}
}

int main()
{
	std::cout<<"Jumping from Outer and inner circle:\a "<<outer::inner::var2<<std::endl; //prints 10
	
	std::cout<<"global "<<::var<<std::endl;
	getchar();
	return 0;
}
