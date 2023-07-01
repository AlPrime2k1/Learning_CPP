#include<iostream>
using namespace std;

int Cel_to_Fah(int temp)
{
    return (temp*9/5)+32;
}

int Fah_to_Cel(int temp)
{
    return (temp-32)*5/9;
}

int main()
{
cout<<"Temperature Converter"<<endl;
cout<<"1. Celsius to Fahrenheit"<<endl;
cout<<"2. Fahrenheit to Celsius"<<endl;
cout<<"Enter your choice : ";

int choice;
cin>>choice;
switch(choice)
{
    case 1:
    {
        int temp;
        cout<<"Enter the temperature in Celsius : ";
        cin>>temp;
        cout<<"Temperature in Fahrenheit : "<<Cel_to_Fah(temp);
        break;
    }
    case 2:
    {
        int temp;
        cout<<"Enter the temperature in Fahrenheit : ";
        cin>>temp;
        cout<<"Temperature in Celsius : "<<Fah_to_Cel(temp);
        break;
    }
    default:
    {
        cout<<"Invalid Choice";
        break;
    }
}
return 0;
}