#include<iostream>
using namespace std;

int table_upto(int input)
{
    cout<<endl;
    for(int i=1;i<=input;i++)
    {
        for(int j=1;j<=10;j++)
        {
            cout<<(i*j)<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    table_upto(n);
    cout<<endl;
    return 0;
}