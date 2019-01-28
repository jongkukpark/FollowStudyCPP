#include <iostream>
#include <typeinfo>
#include <iomanip>

int main()
{
	using namespace std;

	float a = 1.0f;
	double d = a; // numeric promotion
	short s = 2; // numeric conversion, 문제가능성

	// numeric conversion problem
	int i = 30000;
	char c = i;

	cout << static_cast<int>(c) << endl;

	// numeric conversion problem
	double big = 0.123456789;
	float f = big;

	cout << std::setprecision(12) << f << endl;
	// 5u: unsigned
	cout << 5u - 10 << endl;

	int q = int(4.0); // c++ style 캐스팅
	int w = (int)4.0; // c style
	int e = static_cast<int>(4.0);

	// 형변환 우선순위
	// 낮음 - int, unsigned int, long, unsigned long, long long, unsigned long long, float, double, long double

	// cout << typeid(a).name() << endl;

	return 0;
}