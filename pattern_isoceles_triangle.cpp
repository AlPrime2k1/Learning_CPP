#include <iostream>
using namespace std;

int main()
{
    cout<<"Pattern printing isocles triangle"<<endl;
    int n;
    cout<<"Enter a number: ";
    cin>>n; 
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}