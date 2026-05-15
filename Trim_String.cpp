#include<iostream>
#include<string>
using namespace std;

string Trim_Right(string str)
{
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (str[i] != ' ')
        {
            return str.substr(0, i + 1);
        }
    }
    return "";
}

string Trim_Left(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            return str.substr(i,str.length() - i);
        }
    }
    return "";

}

string Trim(string str)
{
    return Trim_Left(Trim_Right(str));
}

int main()
{
    string str = "   Hello World!   ";
    cout << "Original string       : '" << str << "'" << endl;
    cout << "Trimmed string (right): '" << Trim_Right(str) << "'" << endl;
    cout << "Trimmed string (left) : '" << Trim_Left(str) << "'" << endl;
    cout << "Trimmed string        : '" << Trim(str) << "'" << endl;
    return 0;
}