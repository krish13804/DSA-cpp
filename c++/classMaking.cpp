#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    int roll_no;
    //constructor 
    student( string a,int b,int c)
    { name=a;
      age =b;
      roll_no=c;
      //cout<<"Default constructor call"<<endl;
    }
    void displayinfo()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
int main()
{
    student s1("amit",23,147);
   // s1.name="Krishna";
    //s1.age=14;
    //s1.roll_no=2345;
    //cout<<"Name : "<<s1.name<<endl;
    s1.displayinfo();
    cout<<"shivanshu loves Mankaran"<<endl;
    return 0;
}