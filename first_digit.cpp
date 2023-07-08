#include<iostream>
using namespace std;

int FirstDigit(int input)
{
    while(input>=10)
    {
        input=input/10;
    }
    return input;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"First digit of the number is: "<<FirstDigit(n)<<endl;
    return 0;
}