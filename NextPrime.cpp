#include<iostream>
using namespace std;

int NextPrime(int n)
{
    n++;
    while(true)
    {
        int i;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                break;          // breaks if prime number is found
            }
        }
        if(i==n)
            return n;
        n++;
    }
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The next prime number is: "<<NextPrime(n);
    return 0;
}