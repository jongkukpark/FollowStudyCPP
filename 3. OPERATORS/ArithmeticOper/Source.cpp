/*
	���׿�����: +, - / +1, -2
	���׿�����
	������ ����: %
	�Ǽ� ������ ������ �Ǽ�
*/
#include <iostream>

int main()
{
	using namespace std;

	int x = 7;
	int y = -3 - -x;
	int z = x % y;

	cout << "��: " << x / y << " ������: " << z << endl;

	cout << float(x) / y << endl;
	cout << x / float(y) << endl;
	cout << float(x) / float(y) << endl;

	cout << -5 / 2 << endl; // -2�� ����, �ڸ� ���� C++11����
	cout << -5 % 2 << endl; // ����(-5)�� ���� ������ ��, ����� ���̳��� C++11����
	cout << 5 % -2 << endl;

	int a = x; // ���Կ����� =
	a += y; // a = a + y
	a -= y;
	a *= y;
	a /= y;
	a %= y;
	//�ڵ��� ���� �ٿ��ش�.

	return 0;
}