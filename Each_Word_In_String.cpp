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
void Print_Each_Word(string str)
{
    cout <<"Each word in the string is: "<<endl;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            cout<<endl;
        }
        else
        {
            cout<<str[i];
        }
    }
}

int main()
{
    string str = Read_string();
    Print_Each_Word(str);
    return 0;
}

