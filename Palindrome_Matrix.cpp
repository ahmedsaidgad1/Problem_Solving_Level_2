//Write a c++ program to find is this amtrix is a palaindrome or not

#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>
using namespace std;


const int  SIZE = 3;
const int  from = 0;
const int  to = 100;

int RandNum(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

void Fill_Array(int arr[SIZE][SIZE])
{
	for (int i = 0;i < SIZE;i++)
	{
		for (int j = 0;j < SIZE;j++)
		{
			arr[i][j] = RandNum(0, 100);
		}
	}
}

void Print_array(int arr[SIZE][SIZE], string message)
{
	cout << message << endl;
	cout << "Generated matrixe " << SIZE << " x " << SIZE << " : " << endl;
	for (int i = 0;i < SIZE;i++)
	{
		for (int j = 0;j < SIZE;j++)
		{
			cout << setw(4) << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void Check_Palindrome(int arr[SIZE][SIZE])
{
	bool isPalindrome = true;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (arr[i][j] != arr[SIZE - 1 - i][SIZE - 1 - j])
			{
				isPalindrome = false;
				break;
			}
		}
		if (!isPalindrome)
			break;
	}

	if (isPalindrome)
		cout << "The matrix is a palindrome." << endl;
	else
		cout << "The matrix is not a palindrome." << endl;
}


int main()
{
	srand((unsigned)time(NULL));
	int arr1[SIZE][SIZE];


	Fill_Array(arr1);
    
	Print_array(arr1, "Matrix 1: ");
	cout << endl;

	Check_Palindrome(arr1);

	return 0;
}