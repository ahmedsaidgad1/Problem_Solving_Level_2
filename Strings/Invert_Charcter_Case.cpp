#include<iostream>  
#include<string>
#include<cctype>
using namespace std;

char Read_Char()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    return ch;
}

char Invert_Case(char ch)
{
    return isupper(ch)? tolower(ch) : toupper(ch);
}

int main()
{
    char ch = Read_Char();
    char inverted_ch = Invert_Case(ch);
    cout << "Inverted case: " << inverted_ch << endl;
    return 0;
}