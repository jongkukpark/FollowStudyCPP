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

	if (c == 1 && d++ == 2) // c�� 1�� �ƴ϶� &&�� ���� �ٷ� false�� ���͹���.
	{
		// ���� ��.
	}

	cout << d << endl; // 2�� ���͹���

	bool w = true;
	bool v = false;
	// ��𸣰� ��Ģ

	!(x && y); // ���� ����
	!x || !y; // ���� ����

	//XOR
	// false false -> false
	// false true -> true
	// true false -> true
	// true true -> false
	if (w != v) // XOR ���� ����
	{

	}

	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	bool r1 = v1 || v2 && v3; // &&�� ||���� �켱������ ����.
	bool r2 = (v1 || v2) && v3;

	cout << r1 << endl; // 1
	cout << r2 << endl; // 0

	return 0;
}