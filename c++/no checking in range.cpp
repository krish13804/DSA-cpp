#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    cout<<"enter a no. :";
    cin>>n;
    for(i=0;i<=50;i++)
    {
        if (n==i)
        {
            count++;
            break;
        }
    }
     if (count==1)
     cout<<"the no."<<n<<"lies in the range.";
     else
     cout<<"the no."<<n<<" does not lie in the range.";

     return 0;
}
     