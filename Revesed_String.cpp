#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

string Read_string()
{
	string str;
	cout << "Enter a string: ";
	getline(cin, str);
	return str;
}

vector <string> Split_Words(string str)
{
	vector <string> words;
	string Temp_word = "";
	
	for (int i = 0;i < str.length();i++)
	{

		if (str[i] != ' ')
		{
			Temp_word += str[i];
		}

		else
		{
			if (Temp_word != "")
			{
				words.push_back(Temp_word);
				Temp_word = "";
			}
		}
	}

	if (Temp_word != "")
	{
		words.push_back(Temp_word);
	}

	return words;
}

string Reverse_Words(vector<string> words)
{
	string Reversed_str = "";

	for (int i = words.size() - 1; i >= 0; i--)
	{
		Reversed_str += words[i];

		if (i > 0)
		{
			Reversed_str += ' ';
		}
	}

	return Reversed_str;
}

int main()
{
	string str = Read_string();
	vector <string> words = Split_Words(str);
	string Reversed_str = Reverse_Words(words);
	cout << "Reversed string: " << Reversed_str << endl;
	return 0;
}
