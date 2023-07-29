#include<iostream>
using namespace std;

int BintoDec(int a)
{
    int base=1,rem,dec_val=0;
    
    while(a>0)
    {
        rem=a%10;
        dec_val=dec_val+(rem*base);
        base=base*2;
        a=a/10;
    }
    return dec_val;
}

int main()
{
    int n;
    cout<<"Enter the binary number: ";
    cin>>n;
    cout<<"The decimal equivalent is: "<<BintoDec(n)<<endl;
    return 0;
}