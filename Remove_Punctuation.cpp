#include<iostream>
#include<string>
#include<vector>
using namespace std;


string Read_string()
{
    string str;
    cout << "Enter a string without punctuation: ";
    getline(cin, str);
    return str;
}

string Remove_Punctuation(const string &str)
{
    string Result = "";
    for (char ch : str)
    {
        if (!ispunct(ch))
        {
            Result += ch;
        }
    }
    return Result;
}

int main()
{
    string str = Read_string();
    str = Remove_Punctuation(str);
    cout << "String without punctuation: " << str << endl;
    return 0;
}