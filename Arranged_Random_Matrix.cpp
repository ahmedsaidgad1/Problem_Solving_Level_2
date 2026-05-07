#include<iostream>
#include<string>
#include<ctime>
#include<iomanip>
#include<algorithm>

using namespace std;
const int  SIZE = 3;
const int  from = 0;
const int  to = 100;

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
void Sort_Array(int arr[SIZE][SIZE]) 
{
	sort((int*)arr, (int*)arr + (SIZE * SIZE));
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[SIZE][SIZE];
	Fill_Array(arr);
	Print_Array(arr, "Array Before Sorting: ");
	Sort_Array(arr);
	Print_Array(arr, "Array After Sorting: ");
	return 0;
}