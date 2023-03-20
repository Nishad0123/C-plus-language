#include<iostream>

using namespace std;

class Shape
{
	
	private:
	int len;
	int brt;
	
	public:
	//Shape();
	Shape(int len, int breath=0)
	{
		this len=len;
		brt = breath;
	}
	
	void setpara(int len, int breath);
	
};

void setpara(int len, int breath)
		{
			this->len=len;
			brt=breath;
		}