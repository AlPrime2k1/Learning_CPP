#include<iostream>
using namespace std;

int smallest_divisor(int input)
{
    int i=2;
    while(input%i!=0)
    {
        i++;
    }
    return i;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Smallest divisor is: "<<smallest_divisor(n)<<endl;
    return 0;
}