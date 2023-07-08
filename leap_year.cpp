#include<iostream>
using namespace std;

string leap_year(int year)
{
    if(year%4==0 && year%100!=0 || year%400==0)
    {
        return "Leap Year";
    }
    else
    {
        return "Not a Leap Year";
    }
}

int main()
{
    int year;
    cout<<"Enter the year : ";
    cin>>year;
    cout<<leap_year(year);
    return 0;
}