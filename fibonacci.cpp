#include <iostream>
using namespace std;
/*
int main(){

int a=0,b=1,i;
cout<<a <<b;
for (i=0;i<4;i++){
a=a+b;
b=b+a;
cout<<a <<b<<"\n";
}
}
*/


int fibo(int limit)
{
	int a=0,b=1;
    cout<<a<<"\n"<<b<<"\n";
    
    for(int i=0;i<limit;i++)
    {
    	a=a+b;
        b=a+b;
        cout<<a<<"\n"<<b<<"\n";
    }
    
    
    return 0;
}

int main()
{
	//int a=0;b=1;
	fibo(5);
}