// program to fill a 3x3 matrix with random numbers, print the matrix, and calculate the sum of its elements and check if the sum of two matrices are equal
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

int Sum_matrix(int matrix[SIZE][SIZE])
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
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
    cout << "Sum of Matrix 1: " << Sum_matrix(matrix1) << endl;
    cout << "========================" << endl;
    cout << "Matrix 2:" << endl;
    Print_matrix(matrix2);
    cout << "Sum of Matrix 2: " << Sum_matrix(matrix2) << endl;
    cout << "========================" << endl;

    if (Sum_matrix(matrix1) == Sum_matrix(matrix2))
    {
        cout << "The sum of the two matrices are equal." << endl;
        cout << "========================" << endl;
    }
    else
    {
        cout << "The sum of the two matrices are not equal." << endl;
        cout << "========================" << endl;
    }

    return 0;
}