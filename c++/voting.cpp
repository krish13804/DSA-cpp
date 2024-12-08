#include<iostream>
#include <string>
using namespace std;
int main()
{
    int age;
    string n;
    cout<<"enter age-";
    cin>>age;
    cout<<"enter nationality-";
    cin>>n;
    
        if( n=="indian" && age>=18)
         {
             cout<<"yes you can vote";
         }
        else
        {
            cout<<"not eligible to vote";
            
        }
     return 0;
     
}