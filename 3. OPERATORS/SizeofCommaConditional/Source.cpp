/*
	sizeof: ���������� ũ��
*/

#include <iostream>

int main()
{
	using namespace std;

	float a;

	sizeof(float); // ������Ÿ��, ��ȣ �־�� ��
	// 4bytes = 4*8 = 32bits
	sizeof a; // ����, �������� ��ȣ ��� ��.
	// ����ڰ� ���� �ڷ������� sizeof�� ��밡��.
	// sizeof�� �Լ��� �ƴ� operator�̴�.

	int x = 3,
		y = 10,
		z = (++x, ++y);
	// ��ǥ ������: ++x�� ���ǰ�, ++y�� ���� ��
	// z = y�� ��.
	// z = (++x, ++y)��
	// ++x;
	// ++y;
	// int z = y; �� ����. for������ �����ϰ� ����.

	cout << x << " " << y << " " << z << endl;

	int b = 1,
		c = 10;
	int d;

	d = b, c; // ,�� =���� �켱 ������ ���Ƽ� (d = b), b;�� �Ǿ���.

	cout << d << endl;

	// conditional operator ( arithmetic if )
	bool onSale = true;

	const int price = (onSale ? 10 : 100);

	/*int price; // ���⼭�� price�� const�� ���� ����.

	if (onSale)
		price = 10;
	else
		price = 100;*/

	cout << price << endl;
		
	int e = 5;

	cout << ((x % 2 == 0) ? "even" : "odd") << endl;
	// <<�� 
	return 0;
}