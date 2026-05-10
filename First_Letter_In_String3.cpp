// program to print the first letter in each word of a string
#include <iostream>
#include <string>
using namespace std;

string Read_string()
{
	string str;
	cout << "Enter a string: ";
	getline(cin, str);
	return str;
}

void Print_first_letter(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (i == 0 || str[i - 1] == ' ')
		{
			cout << char(tolower(str[i])) << " ";
		}
	}
}

 int main()
{	string str = Read_string();
	Print_first_letter(str);
	return 0;
}