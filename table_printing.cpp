#include<iostream>
using namespace std;

int print_table(int input)
{
    for(int i=1;i<=10;i++)
    {
        cout<<input<<" X "<<i<<" = "<<input*i<<endl;
    }
    return 0;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    print_table(n);
    return 0;
}