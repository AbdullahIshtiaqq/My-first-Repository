#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int array[100];
	string name;
	cout << "Enter the name of the file: ";
	getline(cin, name);

	ifstream fin;
	fin.open(name);

	if (fin)
	{
		int count = 0;
		fin >> array[0];

		while (fin && count < 100)
		{
			count++;
			fin >> array[count];
		}
		
		int smallest, largest, sum;
		sum = smallest = largest = array[0];

		for (int i = 1; i < count; i++)
		{
			if (array[i] > largest)
				largest = array[i];
			if (array[i] < smallest)
				smallest = array[i];
			sum = sum + array[i];
		}

		cout << "The lowest number in the file is: " << smallest << endl;
		cout << "The highest number in the file is: " << largest << endl;
		cout << "The sum of the numbers in the file is: " << sum << endl;
		cout << "The average of the numbers in the file is: " << static_cast<double>(sum) / count << endl;
	}
	else
	{
		cout << "Error! File not found.\n";
	}

	return 0;
}