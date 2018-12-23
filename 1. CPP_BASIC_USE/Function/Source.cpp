#include <iostream>

using namespace std;

int multiplyTwoNumbers(int num_a, int num_b);

int main()
{
	int mul = multiplyTwoNumbers(5, 6);
	cout << multiplyTwoNumbers(1/* argument */, 2) << endl;
	cout << multiplyTwoNumbers(3, 4) << endl;
	cout << multiplyTwoNumbers(8, 13) << endl;
	cout << mul << endl;

	return 0;
}

int multiplyTwoNumbers(int num_a, int num_b)
{
	int sum = num_a * num_b;
	return sum;
}
