#include <iostream>
#include<string>
using namespace std;

string Read_string()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    return str;
}

int Count_words(string str)
{
    int count = 0;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string str = Read_string();
    int word_count = Count_words(str);
    cout << "Number of words in the string: " << word_count << endl;
    return 0;
}