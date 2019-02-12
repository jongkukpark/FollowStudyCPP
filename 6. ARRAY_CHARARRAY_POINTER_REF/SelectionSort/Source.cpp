#include <iostream>

using namespace std;

int main()
{
	const int length = 5;
	int selection[length] = { 3, 5, 2, 1, 4 };

	for (int i = 0; i < length; i++)
	{
		int min_index = i;
		for (int j = i; j < length; j++)
		{
			if (selection[min_index] > selection[j])
			{
				min_index = j;
			}
		}
		std::swap(selection[i], selection[min_index]);
	}

	for (int i = 0; i < length; i++)
	{
		cout << selection[i] << " ";
	}
	cout << endl;

	return 0;
}