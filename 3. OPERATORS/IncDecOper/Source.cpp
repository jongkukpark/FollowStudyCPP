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

	cout << add(a, ++a) << endl; // 18, 원하던건 17
	// 이런건 하지 하십쇼
	
	int c = 1;
	c = c++;
	// 이런것도 하지 마십쇼

	cout << c << endl;

	return 0;
}

int add(int a, int b)
{
	return a + b;
}
