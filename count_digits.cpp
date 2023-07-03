#include<iostream>
using namespace std;

int count_digit(int n)
{
    int count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The number of digits in "<<n<<" is "<<count_digit(n)<<endl;
    return 1;
}