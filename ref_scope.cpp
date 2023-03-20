
#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the Value"<<endl;
    int value=120;
    int num1;
    char fot='D';
    int &num2=value;
    int &num3=num2;
    char &hut=fot;
    //while(8)
    {
        
       // cout<<"printing value \n "<<value<<"   \a given"; 
        cout<<"num1=="<<num1<<endl; 
        cout<<"num2="<<num2<<endl;
        num2=33;
        cout<<"value="<<value<<endl;
        cout<<"num3 "<<num3<<endl;
        cout<<"hut="<<hut<<endl;
    }
    return 0;
}