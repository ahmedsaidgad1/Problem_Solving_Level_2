#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

const int from = 0;
const int to = 100;
const int SIZE = 3;

int Randnum(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

void Fill_martix(int matrix[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            matrix[i][j] = Randnum(from, to);
        }
    }
}

void Print_matrix(int matrix[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << setw(5) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}


bool are_typical_matrices(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (matrix1[i][j] != matrix2[i][j])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    srand((unsigned)time(NULL));

    int matrix1[SIZE][SIZE];
    int matrix2[SIZE][SIZE];

    Fill_martix(matrix1);
    Fill_martix(matrix2);

    cout << "Matrix 1:" << endl;
    Print_matrix(matrix1);
    cout << "==================" << endl;
    cout << "Matrix 2:" << endl;
    Print_matrix(matrix2);
    cout << "==================" << endl;
    if (are_typical_matrices(matrix1, matrix2))
    {
        cout << "The matrices are identical." << endl;
    }
    else
    {
        cout << "The matrices are different." << endl;
    }

    return 0;
}