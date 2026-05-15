#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
const string File_Name = "Client.txt";

struct Client_Details
{
    string name;
    string address;
    string PIN;
    string phone_number;
    double balance;
};

Client_Details Get_Client_Details()
{
    Client_Details client;

    cout << "Enter Client Name: ";
    getline(cin, client.name);

    cout << "Enter Client Address: ";
    getline(cin, client.address);

    cout << "Enter Client PIN: ";
    getline(cin, client.PIN);

    cout << "Enter Client Phone Number: ";
    getline(cin, client.phone_number);

    cout << "Enter Client Balance: ";
    cin >> client.balance;
    
    cin.ignore();
    return client;
}

string Convert_Record_To_String (Client_Details client , string delimiter = "/___ /")
{
    string st_Client_Record ="";
    st_Client_Record += client.name + delimiter;
    st_Client_Record += client.address + delimiter;
    st_Client_Record += client.PIN + delimiter;
    st_Client_Record += client.phone_number + delimiter;
    st_Client_Record += to_string(client.balance) + delimiter;
    return st_Client_Record;
}

void Add_Data_To_File (string File_Name, string st_Data_line)
{
    fstream My_File;
    My_File.open(File_Name, ios::out | ios::app);
    if (My_File.is_open())
    {
        My_File << st_Data_line << endl;
        My_File.close();
    }
}

void Add_New_Client()
{
    Client_Details client = Get_Client_Details();
    string st_Client_Record = Convert_Record_To_String(client);
    Add_Data_To_File(File_Name, st_Client_Record);
}

void Ask_User_To_Add_New_Client()
{
    char user_choice = 'n';
    do
    {
        system("cls");
        cout << "Add New Client" << endl;
        Add_New_Client();
        cout << "Do you want to add another client? (y/n): ";
        cin >> user_choice;
    } while (user_choice == 'y' || user_choice == 'Y');
}

int main()
{
    Ask_User_To_Add_New_Client();
    return 0;
}