#include<iostream>
#include<string>
#include<vector>
using namespace std;

string Join_String(vector<string> vStrings,string Delim)
{
    string s1="";
        for(string& s:vStrings)
        {
            s1+= s + Delim;
        }
    return s1.substr(0 , s1.length()-Delim.length());
}


int main()
{
    
    vector <string> vString={"Ahmed","Mohamed ","Ali"};
    cout <<"Vector after joining is: ";
    cout << Join_String( vString ," ") << endl;

    return 0;
}   