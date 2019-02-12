#include <iostream>

using namespace std;

int main()
{
	const int num_rows = 3;
	const int num_column = 5;

	for (int row = 0; row < num_rows; row++)
	{
		for (int col = 0; col < num_column; col++)
		{
			cout << '[' << row << ']' << '[' << col << ']' << '\t';
		}
		cout << endl;
	}

	cout << endl;

	int array[num_rows][num_column] = {
	{1, 2,},
	{6, 7, 8, 9 ,10},
	{11, 12, 13, 14, 15}}; // row-major

	for (int row = 0; row < num_rows; row++)
	{
		for (int col = 0; col < num_column; col++)
		{
			cout << array[row][col] << '\t';
		}
		cout << endl;
	}

	cout << endl;
}