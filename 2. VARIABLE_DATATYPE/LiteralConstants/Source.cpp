#include <iostream>

int main()
{
	using namespace std;

	const int price_per_item = 10;

	int num_items = 123;
	int price = num_items * price_per_item; // 주석을 달수도 있지만 눈에 잘 안들어옴.

	// c++14
	int x = 0b1010; // binary
	int b = 0b1010'0111'1011'0011;
	cout << x << endl;
	cout << b << endl;

	// decimal: 0 1 2 3 4 5 6 7 8 9
	// octal: 0 1 2 3 4 5 6 7
	// hexa: 0 1 2 3 4 5 6 7 8 9 a b c e f

	int octal = 012; // 8진수
	cout << octal << endl;

	int hexa = 0xF;
	cout << hexa << endl;

	float pi = 3.14f;
	int i = (unsigned int)1234; // unsigned

	unsigned int n = 5u;
	long n2 = 5L;
	double d = 6.0e-10;

	cout << pi << endl;
	cout << i << endl;

	return 0;
}