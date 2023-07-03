#include<iostream>
using namespace std;

int all_divisors(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            cout<<i<<" ";
    }
    return 0;
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The divisors of "<<n<<" are : ";
    all_divisors(n);
    return 0;
}