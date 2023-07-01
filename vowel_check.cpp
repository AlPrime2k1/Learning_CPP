#include<iostream>
using namespace std;

string vowel_check(char term)
{
    if(term=='a'||term=='e'||term=='i'||term=='o'||term=='u')
        return "vowel";
    else
        return "consonant";    
}

int main()
{
    char term;
    cout<<"Enter a character: ";
    cin>>term;
    cout<<term<<" is a "<<vowel_check(term)<<endl;
    return 0;
}