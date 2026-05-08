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

void Print_Max_Num(int arr[SIZE][SIZE])
{
	int max = arr[0][0];
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	cout << "Maximum number in the matrix: " << max << endl;
}

void Print_Min_Num(int arr[SIZE][SIZE])
{
    int min = arr[0][0];
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    cout << "Minimum number in the matrix: " << min << endl;
}
int main()
{
	srand((unsigned)time(NULL));
	int arr1[SIZE][SIZE];


	Fill_Array(arr1);
    
	Print_array(arr1, "Matrix 1: ");
	cout << endl;

    Print_Max_Num(arr1);
    cout<<endl; 

    Print_Min_Num(arr1);
	return 0;
}