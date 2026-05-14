#include<iostream>
#include<string>
using namespace std;

string Read_string()
{
    string str;
    cout <<"Enter a string: ";
    getline(cin,str);
    return str;
}

string Trim_Left(string str)
{
    for (int i=0;i<str.length();i++)
    {
        if (str[i]!= ' ')
        {
            return str.substr(i,str.length()-i);
        }
    }
    return "";
}

string Trim_Right(string str)
{
    for (int i=str.length()-1;i>=0;i--)
    {
        if (str[i]!= ' ')
        {
            return str.substr(0,i+1);
        }
    }
    return "";
}

string Trim(string str)
{
    return Trim_Right(Trim_Left(str));
}

int main()
{
    string str = Read_string();
    cout <<"String: '"<<str<<"'"<<endl;
    cout <<"Trimmeed left: '"<<Trim_Left(str)<<"'"<<endl;
    cout <<"Trimmed right: '"<<Trim_Right(str)<<"'"<<endl; 
    cout <<"Trimmed: '"<<Trim(str)<<"'"<<endl;
    return 0;
}