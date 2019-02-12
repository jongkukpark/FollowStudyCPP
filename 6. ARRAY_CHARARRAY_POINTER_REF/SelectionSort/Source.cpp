#include <iostream>

using namespace std;

int main()
{
	const int length = 5;
	int selection[length] = { 3, 5, 2, 1, 4 };

	for (int i = 0; i < length; i++)
	{
		int min = numeric_limits<int>::max();
		int min_index = 0;
		for (int j = i; j < length; j++)
		{
			if (min > selection[j])
			{
				min = selection[j];
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