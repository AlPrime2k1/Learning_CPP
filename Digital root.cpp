// Digital root of a number is the recursive sum of its digits until we get a single digit number. Example: Digital root of 16 is 1+6 = 7

#include <iostream>
using namespace std;

int DigitalRoot(int n)
{
    int sum=0;
    while(n>0)  
    {
        sum+=n%10;
        n=n/10;
    }
    if(sum>9)                               // If sum is greater than 9, then we need to find the digital root of the sum
        return DigitalRoot(sum);
    else
        return sum;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The digital root is: "<<DigitalRoot(n);
    return 0;
}