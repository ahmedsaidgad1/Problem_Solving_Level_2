#include<iostream>  
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;

string Read_string()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    return str;
}

bool Is_Vowel(char ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void Print_Vowels(string str)
{
    cout<<"Vowels in the string: ";
    for(char ch : str)
    {
        if(Is_Vowel(ch))
        {
            cout<<ch<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    string str = Read_string();
    Print_Vowels(str);
    return 0;
}
