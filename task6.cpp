#include <iostream>
using namespace std;

void swapValues(int&, int&);

int main()
{
	int a, b;

	cout << "Enter two integers: ";
	cin >> a >> b;

	cout << "Before swapping the integers are: ";
	cout << a << " " << b << endl;
	
	swapValues(a, b);

	cout << "After swapping, integers are: ";
	cout << a << " " << b << endl;
	return 0;
}

void swapValues(int& num1, int& num2)
{
	int num3;

	num3 = num1;
	num1 = num2;
	num2 = num3;
}