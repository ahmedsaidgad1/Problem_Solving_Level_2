#include<iostream>  
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;

string Read_String()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    return str;
}

string Upper_All_String(string str)
{
    for(int i =0;i<str.length();i++)
    {
        str[i]=toupper(str[i]);
    }
    return str;
}

string Lower_All_String(string str)
{
    for(int i =0;i<str.length();i++)
    {
        str[i]=tolower(str[i]);
    }
    return str;
}

int main()

{
    string str=Read_String();
    cout<<"Upper Case String: "<<Upper_All_String(str)<<endl;
    cout<<"Lower Case String: "<<Lower_All_String(str)<<endl;   
    return 0;
}