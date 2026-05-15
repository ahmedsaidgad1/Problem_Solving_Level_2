#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;

struct sClient
{
    string name;
    string phone;
    string Pin_Code;
    string Acount_Number;
    double balance;
};

sClient Read_New_Client()
{
    sClient Client;
    cout << "Enter Client Name: ";
    getline(cin, Client.name);

    cout << "Enter Client Phone: ";
    getline(cin, Client.phone);

    cout << "Enter Client Pin Code: ";
    getline(cin, Client.Pin_Code);

    cout << "Enter Client Account Number: ";
    getline(cin, Client.Acount_Number);

    cout << "Enter Client Balance: ";
    cin >> Client.balance;
    return Client;
}

string Convert_Record_To_Line(sClient Client, string seperator = "(-__-)")
{
    string line="";
    line += Client.name + seperator;
    line += Client.phone + seperator;
    line += Client.Pin_Code + seperator;
    line += Client.Acount_Number + seperator;
    line += to_string(Client.balance);
    return line;
}

int main()
{
    cout <<"Enter A New Client Data: " << endl;
    sClient Client = Read_New_Client();
    string line = Convert_Record_To_Line(Client);
    cout << "Client Record Line: " << line << endl;
    return 0;
}