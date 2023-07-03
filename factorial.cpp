#include<iostream>
using namespace std;

unsigned long long int factorial(int n)
{
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}

int main()
{
    unsigned long long int n;
    std::cout<<"Factorial of a number"<<std::endl;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;
    return 0;
}
