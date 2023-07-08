#include<iostream>
using namespace std;

int main(){
    int a,n,d;

    cout<<"Enter first term of AP : ";
    cin>>a;
    cout<<"Enter number of terms of AP : ";
    cin>>n;
    cout<<"Enter common difference of AP : ";
    cin>>d;

    cout<<"Nth term of AP is : "<<(a+(n-1)*d);
}