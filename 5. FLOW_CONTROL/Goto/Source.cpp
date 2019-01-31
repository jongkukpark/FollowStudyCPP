#include <iostream>
#include <cmath>

int main()
{
	using namespace std;

	double x;

	tryagain : 

	cout << "Enter a non-negative number" << endl;
	cin >> x;

	if (x < 0.0)
	{
		cout << "It is negative" << endl;
		goto tryagain;
	}

	cout << sqrt(x) << endl;


	return 0;
}