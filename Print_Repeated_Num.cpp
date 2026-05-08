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

void Print_Repeated_Number(int arr1[SIZE][SIZE], int arr2[SIZE][SIZE])
{
	int Repeated_Number[SIZE * SIZE];
	int counter = 0;
	for (int i = 0;i < SIZE;i++)
	{
		for (int j = 0;j < SIZE;j++)
		{
			if (arr1[i][j] == arr2[i][j])
			{
				Repeated_Number[counter] = arr1[i][j];
				counter++;
			}
		}
	}
	if (counter > 0)
	{
		cout << "Repeated numbers in the same position: ";
		for (int i = 0; i < counter; i++)
		{
			cout << Repeated_Number[i] << " ";
		}
		cout << endl;
	}
	else
	{
		cout << "No repeated numbers in the same position." << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int arr1[SIZE][SIZE], arr2[SIZE][SIZE];


	Fill_Array(arr1);
	Print_array(arr1, "Matrix 1: ");
	cout << endl;

	Fill_Array(arr2);
	Print_array(arr2, "Matrix 2: ");
	cout << endl;

	Print_Repeated_Number(arr1, arr2);
	return 0;
}