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

void count_vowels(const string &str)
{
    int count = 0;
    for(char ch : str)
    {
        if(Is_Vowel(ch))
            count++;
    }
    cout<<"Number of vowels in the string: "<<count<<endl;
}


int main()
{
    string str = Read_string();
    count_vowels(str);
    return 0;
}
