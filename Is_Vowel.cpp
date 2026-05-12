#include<iostream>  
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;

char Read_Char()
{
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    return ch;
}

bool Is_Vowel(char ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}


int main()
{
    char ch = Read_Char();
    if(Is_Vowel(ch))
        cout<<ch<<" is a vowel."<<endl;
    else
        cout<<ch<<" is not a vowel."<<endl;
    return 0;
}
