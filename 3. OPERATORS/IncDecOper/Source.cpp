#include <iostream>

int add(int a, int b);

int main()
{
	using namespace std;

	int x = 5;
	int y = --x;
	int z = x--;

	cout << y << endl;
	cout << z << endl;

	int a = 6, b = 6;
	cout << a << " " << b << endl;
	cout << ++a << " " << --b << endl; // Before Do a = a + 1
	cout << a++ << " " << b-- << endl; 
	cout << a << " " << b << endl;
	// a = 8, b = 4

	cout << add(a, ++a) << endl; // 18, ���ϴ��� 17
	// �̷��� ���� �Ͻʼ�
	
	int c = 1;
	c = c++;
	// �̷��͵� ���� ���ʼ�

	cout << c << endl;

	return 0;
}

int add(int a, int b)
{
	return a + b;
}
