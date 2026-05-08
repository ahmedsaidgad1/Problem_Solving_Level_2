#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>
using namespace std;


const int  SIZE = 3  ;
const int  from = 0  ;
const int  to   = 100;

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

void Print_array(int arr[SIZE][SIZE])
{
	cout <<"Generated matrixe" << SIZE <<"x"<< SIZE <<":"<< endl; 
	for (int i = 0;i < SIZE;i++)
	{
		for (int j = 0;j < SIZE;j++)
		{
			cout << setw(4) << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void Check_Num_Exist(int arr[SIZE][SIZE],int num)
{
	for (int i = 0;i < SIZE;i++)
	{
		for (int j = 0;j < SIZE;j++)
		{
			if (arr[i][j] == num)
			{
				cout << "Number " << num << " exist in the matrixe" << endl;
				return;
			}
		}
	}
	cout << "Number " << num << " does not exist in the matrixe" << endl;
}


int main()
{
	srand((unsigned)time(NULL));
	int arr[SIZE][SIZE];
	Fill_Array(arr);
	Print_array(arr);
	int num;
	cout << "Enter a number to check if it exists in the matrixe: ";	
	cin >> num;
	Check_Num_Exist(arr, num);
	return 0;
}