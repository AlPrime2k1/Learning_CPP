#include<iostream>
using namespace std;

int main(){
    int op;
    float x,y;
    cout<<"-=-=-=-=-=-= Calculator -=-=-=-=-=-=-=-=-\n";
    cout<<" 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Modulus\n 6. Exit\n";
    cout<<"Enter your choice : ";
    cin>>op;
    if(op<6)
    {
        cout<<"Enter two numbers : ";
        cin>>x>>y;
    }
    switch(op)
    {
        case 1:cout<<"Sum "<<x+y; break;
        case 2:cout<<"Difference "<<x-y; break;
        case 3:cout<<"Product "<<x*y; break;
        case 4:cout<<"Division "<<x/y; break;
        case 5:cout<<"Modulus "<<int(x)%int(y); break;
        case 6:cout<<"Exit ";return 0; //break;
        default:cout<<"Invalid choice";
    }
    return 0;
}
    