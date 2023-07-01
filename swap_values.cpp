#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter number A : ";
    cin>>a;

    cout<<"Enter number B : ";
    cin>>b;

    a=a^b;
    b=a^b;
    a=a^b;
    
    cout<<"After swapping: "<<"\n";
    cout<<"A="<<a<<"\n"<<"B="<<b;

}