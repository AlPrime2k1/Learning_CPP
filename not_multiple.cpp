#include<iostream>
using namespace std;

int not_multiple(int n,int x,int count)
{
    count=1;
    int i=0;
    for(i=0;i<=n;i++)
    {
        if(i%x!=0)
        {
            cout<<i<<" "<<count<<endl;
            count++;
        }
    }
    cout<<"Count : "<<count-1<<endl;        // count-1 because the loop will do i++ still in last iteration
    /*
    while(i<=n)
    {
        if(i%x!=0)                          // using while loop instead of for loop
            cout<<i<<" ";
        i++;
    }
    */
}

int main()
{
    int n,x,count;
    cout<<"Enter the number N : ";
    cin>>n;

    cout<<"Enter the number X : ";
    cin>>x;
    not_multiple(n,x,count);
    return 0;
}