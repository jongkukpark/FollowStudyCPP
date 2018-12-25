/*
	true(1)
	false(0)
*/

#include <iostream>

bool isEqual(int a, int b)
{
	return (a == b);
}

int main()
{
	using namespace std;
	bool b1 = true; // copy initialization
	bool b2(false); // direct initialization
	bool b3{ true }; // uniform initialization

	b3 = false;
	
	cout << std::boolalpha; // 1, 0이 아니라 true, false로 나옴.
	cout << b3 << endl;
	cout << std::noboolalpha;
	cout << b1 << endl;
	cout << !true << endl;
	cout << !false << endl;
	cout << !b1 << endl;
	cout << !b2 << endl;

	cout << std::boolalpha;
	cout << "AND" << endl;
	cout << (true && true) << endl;
	cout << (true && false) << endl;
	cout << (false && true) << endl;
	cout << (false && false) << endl;

	cout << "OR" << endl;
	cout << (true || true) << endl;
	cout << (false || true) << endl;
	cout << (true || false) << endl;
	cout << (false || false) << endl;

	cout << "IF" << endl;
	if (false)
	{
		cout << "This is true." << endl;
	}
	else
	{
		cout << "This is false." << endl;
	}

	cout << "isEqual? " << isEqual(1, 1) << endl;

	bool b;

	cin >> b; // 입력 받을 때 0이나 1로 넣어야 함.
	cout << boolalpha << "Your input : " << b << endl;

	return 0;
}