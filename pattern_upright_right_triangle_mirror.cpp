/* Pattern : Upright Right Triangle Mirror
    X
   XX
  XXX
 XXXX
XXXXX
*/
#include<iostream>
using namespace std;

int pattern(int n)
{
    int i,j,k;
    for (i=0;i<n;i++)
    {
        for (j=0;j<(n-i-1);j++)
        {
            cout<<" ";
        }

        for(k=0;k<=i;k++)
            cout<<"X";
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    pattern(n);
    return 0;
}