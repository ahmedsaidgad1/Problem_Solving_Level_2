#include<iostream>
#include<string>
#include<ctime>
#include<iomanip>
using namespace std;
const int  SIZE = 3;
const int  from = 0;
const int  to = 100;

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
			arr[i][j] = RandNum(from, to);
		}
	}
}

void Print_Array_With_Sums(int arr[SIZE][SIZE]) 
{
	cout << "Generated " << SIZE << "x" << SIZE << " Matrix with Row Sums:" << endl;
	cout << "------------------------------------" << endl;

	for (int i = 0; i < SIZE; i++) 
	{
		int RowSum = 0;
		for (int j = 0; j < SIZE; j++) 
		{
			cout << setw(4) << arr[i][j] << " ";
			RowSum += arr[i][j];
		}
		cout << " | Row Sum = " << RowSum << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[SIZE][SIZE];
	Fill_Array(arr);
	Print_Array_With_Sums(arr);
	return 0;
}