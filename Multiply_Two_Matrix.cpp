#include<iostream>
#include<string>
#include<ctime>
#include<iomanip>
#include<algorithm>

using namespace std ;
const int  SIZE = 3 ;
const int  from = 0 ;
const int  to   = 10;

// function to generate a random number
int Random_numbers(int from, int to)
{
	int Rand_Num = rand() % (to - from + 1) + from;
	return Rand_Num;
}

void Fill_Array(int arr[SIZE][SIZE])
{

	for (int i = 0;i < SIZE;i++)
	{
		for (int j = 0;j < SIZE;j++)
		{
			arr[i][j] = Random_numbers(from, to);
		}
	}
}

void Print_Array(int arr[SIZE][SIZE],string message)
{
	cout << endl << message << endl;
	for (int i = 0;i < SIZE;i++)
	{
		for (int j = 0;j < SIZE;j++)
		{
			cout << setw(5) << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void Print_Multiply_Array(int arr1[SIZE][SIZE], int arr2[SIZE][SIZE],string message)
{
	cout << endl << message << endl;
	for (int i = 0;i < SIZE;i++)
	{
		for (int j = 0;j < SIZE;j++)
		{
			cout << setw(5) << arr1[i][j] * arr2[i][j]<<" ";
		}
		cout << endl;
	}
}



int main()
{
	srand((unsigned)time(NULL));
	int arr1[SIZE][SIZE], arr2[SIZE][SIZE], Multiply_Array[SIZE][SIZE];


	Fill_Array(arr1);
	Print_Array(arr1, "-------- Array 1 -------- \n");


	Fill_Array(arr2);
	Print_Array(arr2, "-------- Array 2 -------- \n");

	cout << "\n=========================" << endl;
	Print_Multiply_Array(arr1, arr2, " Multiplied The Arrays :\n");

	return 0;
}