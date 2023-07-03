#include<iostream>
using namespace std;

int isPrime(int i)
{
    int flag=0;
    for(int j=2;j<i;j++)        // function to check if the number is prime or not
    {
        if(i%j==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        return 1;
    else
        return 0;
}

int Factor(int input)       // Function to find and print prime factors of the input number 
{
    int i=2;
    if (input==0)
    {
        cout<<"No prime factors"<<endl;
        return 0;
    }
    cout<<"Prime Factors are : ";
    
    if(input==1)
        cout<<"1";
    
    while(input!=1)
    {
        
        if(input%i==0 && isPrime(i))
        {   
            cout<<i<<" ";
            input=input/i;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(!isPrime(n))
        cout<<"The number is Composite"<<endl;
    else
        cout<<"The number is prime"<<endl;
    Factor(n);
    cout<<endl;
    return 0;
}