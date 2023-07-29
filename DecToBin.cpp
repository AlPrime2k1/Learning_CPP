#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector <int> Bin_val;
    cout<<"Enter the decimal number: ";
    cin>>n;
    while(n>0)
    {
        Bin_val.push_back(n%2);
        n=n/2;
    }
    cout<<"The binary equivalent is: ";
    for (int i=Bin_val.size()-1;i>=0;i--)
    {
        cout<<Bin_val[i];
    }
    return 0;
}