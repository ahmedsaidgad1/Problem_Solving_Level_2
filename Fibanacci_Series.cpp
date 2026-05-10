#include <iostream>
using namespace std;

void printFibonacci(int n)
{
	int a = 0, b = 1, nextTerm;
	cout << "Fibonacci Series: ";
	for (int i = 1; i <= n; ++i) {
		cout << a << " ";
		nextTerm = a + b;
		a = b;
		b = nextTerm;
	}
}

int main()
{
	int n;
	cout << "Enter the number of terms: ";
	cin >> n;
	printFibonacci(n);
	return 0;
}