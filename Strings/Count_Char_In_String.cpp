#include<iostream>  
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;

string Read_Char()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    return str;
}

char Read_Char(string str)
{
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    return ch;
}

int Count_Char(string str, char ch)
{
    int count = 0;
    for(char &c : str)
    {
        if(c == ch)
            count++;
    }
    return count;
}

int main()
{
    string str = Read_Char();
    char ch = Read_Char(str);
    int count = Count_Char(str, ch);
    cout<<"Number of occurrences of '"<<ch<<"': "<<count<<endl;
    return 0;
}
