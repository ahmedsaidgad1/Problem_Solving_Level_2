#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string Replace_Word_In_String(string str, string word, string replacement)
{
    int pos = str.find(word);
    if (pos != std::string::npos)
    {
        str = str.replace(pos, word.length(), replacement);
        pos = str.find (word, pos + replacement.length());
    }
    return str;
}

int main()
{
    string str =" Egypt is the best country in the world";
    string word = "Egypt";
    string replacement = "egypt";


    cout << "Original String: " << str << endl;
    cout << "Modified String: " << Replace_Word_In_String(str, word, replacement) << endl;

    return 0;
}
