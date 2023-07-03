#include<iostream>
using namespace std;
   
    string toHex(int num) {
        const string dec="0123456789abcdef";        //total range in hex
        if (num==0)
            return "0";
        unsigned int n=num;                         // converting int num to unsigned int to take care of negative numbers
        string ans="";
        while(n>0)
        {
            ans=dec[n%16]+ans;                      // assigning lsb hex value to ans
            n/=16;
        }
        cout<<ans<<"\n";
    }

int main(){
    int temp;
    cout<<"Enter decimal number to convert to hex:";
    cin>>temp;
    toHex(temp);
    return 0;
}