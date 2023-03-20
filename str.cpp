
#include <iostream>
#include<cstring>
using namespace std;

class Student
{
    public:
    int num;
    char name[10];
    char *dos;
};

int main()
{
    Student obj;
    obj.num=5;
    int size=10;
    obj.dos=new char[size];
    cout<<"enter name\n";
    cin>>obj.name;
    cout<<"Enter another\n";
    cin>>obj.dos;
    //obj.name="haker";
    //strcpy(obj.dos,"doker");
    
    cout<<"num= "<<obj.num<<endl;
    cout<<"name= "<<obj.name<<endl;
    cout<<"dos= "<<obj.dos<<endl;
    return 0;
}