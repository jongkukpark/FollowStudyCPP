#include <iostream>

int main()
{
	using namespace std;

	bool x = true;
	cout << !x << endl; // 0: false

	bool y = false;
	cout << (x && y) << endl; // 0: false
	cout << (x || y) << endl; // 1: true

	bool hit = true;
	int health = 10;

	if (hit == true && health < 20)
		cout << "Death" << endl;
	else
		health -= 20;

	int a = 5;
	int b = 7;

	if (!a == b)
	{
		cout << "x is not equal to y" << endl;
	}
	else
	{
		cout << "x is equal to y" << endl;
	}

	// short circuit evaluation
	int c = 2;
	int d = 2;

	if (c == 1 && d++ == 2) // c가 1이 아니라서 &&을 보고 바로 false가 나와버림.
	{
		// 무언가 함.
	}

	cout << d << endl; // 2가 나와버림

	bool w = true;
	bool v = false;
	// 드모르간 법칙

	!(x && y); // 둘이 같다
	!x || !y; // 둘이 같다

	//XOR
	// false false -> false
	// false true -> true
	// true false -> true
	// true true -> false
	if (w != v) // XOR 같은 역할
	{

	}

	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	bool r1 = v1 || v2 && v3; // &&가 ||보다 우선순위가 높다.
	bool r2 = (v1 || v2) && v3;

	cout << r1 << endl; // 1
	cout << r2 << endl; // 0

	return 0;
}