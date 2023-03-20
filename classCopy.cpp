
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
    Student obj2;
    obj2=obj;
    cout<<"num= "<<obj2.num<<endl;
    cout<<"name= "<<obj2.name<<endl;
    cout<<"dos= "<<obj2.dos<<endl;
    Student obj3=obj2;
    cout<<"OBJECT 3\n";
    cout<<"num= "<<obj3.num<<endl;
    cout<<"name= "<<obj3.name<<endl;
    cout<<"dos= "<<obj3.dos<<endl;
    return 0;
}