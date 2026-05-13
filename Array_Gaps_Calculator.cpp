#include <iostream>
using namespace std;


void Input_Arr(int*& arr, int& size) 
{
    cout << "Enter the size of the array: ";
    cin >> size;

    arr = new int[size];
    cout << "Enter " << size << " sorted positive numbers: " << endl;
    for (int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }
}


void Sum_All_Gap(int* arr, int size, int& SumGaps, int& CountGaps) 
{
    SumGaps = 0;
    CountGaps = 0;

    for (int i = 1; i < size; i++) {
        int gap = arr[i] - arr[i - 1];
        SumGaps += gap;
        if (gap == 0) {
            CountGaps++;
        }
    }
}


int main() 
{
    int* arr = nullptr;
    int size;

    Input_Arr (arr, size);

    int SumGaps;
    int CountGaps;
    Sum_All_Gap (arr, size, SumGaps, CountGaps);

    cout << "Sum of all gaps: " << SumGaps << endl;
    cout << "Number of gaps :  " << CountGaps << endl;

    delete[] arr;
    return 0;
}