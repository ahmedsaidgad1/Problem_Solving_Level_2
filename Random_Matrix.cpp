#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
const int  SIZE = 3;

// function to generate a random number
int RandNum(int from, int to)
{
	int Randnum = rand() % (to - from + 1) + from;
	return Randnum;
}

// function to fill the array with random number 
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

// function to print the array 
void Print_array(int arr[SIZE][SIZE])
{
	cout << "Generated 3x3 Matrix:" << endl;
	for (int i = 0;i < SIZE;i++)
	{
		for (int j = 0;j < SIZE;j++)
		{
			cout << setw(4) << arr[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[SIZE][SIZE];
	Fill_Array(arr);
	Print_array(arr);
	return 0;
}