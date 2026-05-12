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

int Count_Small_letter(string str)
{
    int count =0;
    for (char &c:str)
    {
        if (islower(c))
        {
            count++;
        }
    }
    return count;
}

int Count_Capital_letter(string str)
{
    int count =0;
    for (char &c:str)
    {
        if (isupper(c))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string str = Read_Char();
    int small_letter_count = Count_Small_letter(str);
    int capital_letter_count = Count_Capital_letter(str);
    cout<<"Number of small letters: "<<small_letter_count<<endl;
    cout<<"Number of capital letters: "<<capital_letter_count<<endl;
    return 0;
}
