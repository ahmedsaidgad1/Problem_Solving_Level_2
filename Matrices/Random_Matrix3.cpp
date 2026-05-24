#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

const int SIZE = 3;
const int FROM = 0;
const int TO = 100;

int RandNum(int from, int to) 
{
    return rand() % (to - from + 1) + from;
}

void FillArray(int arr[SIZE][SIZE]) 
{
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            arr[i][j] = RandNum(FROM, TO);
        }
    }
}

int GetColumnSum(int arr[SIZE][SIZE], int colNumber) 
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i][colNumber];
    }
    return sum;
}

void PrintArrayWithColSums(int arr[SIZE][SIZE]) 
{
    cout << "\nGenerated " << SIZE << "x" << SIZE << " Matrix:\n";
    cout << "----------------------------\n";

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << setw(5) << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "----------------------------\n";
    cout << "Sums:";
    for (int j = 0; j < SIZE; j++) {
        cout << setw(5) << GetColumnSum(arr, j) << " ";
    }
    cout << endl;
}

int main() 
{
    srand((unsigned)time(NULL));

    int arr[SIZE][SIZE];
    FillArray(arr);
    PrintArrayWithColSums(arr);

    return 0;
}