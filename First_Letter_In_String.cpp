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
		if (i == 0 || str[i] == ' ')
		{
			cout << str[i+1] << " ";
		}
	}
}

int main()
{
	string str = Read_string();
	Print_first_letter(str);
	return 0;
}