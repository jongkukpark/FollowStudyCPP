/*				최소크기
	char:		1byte
	short:		2bytes
	int:		2bytes, 대부분 4bytes
	long:		4bytes
	long long:	8bytes
*/
#include <iostream>
#include <cmath>
#include <limits>

int main()
{
	using namespace std;
	
	short		s = 1; // 2bytes = 18bits
	int			i = 1; // signed 32bits, 첫 비트는 부호 표시
	long		l = 1;
	long long	ll = 1;
	
	// 숫자 범위를 넘어가면 문제가 생긴다
	cout << (pow(2, (sizeof(short) * 8) - 1/* 부호 */) - 1/* 0 */) << endl; // 표현 할 수 있는 가장 큰 숫자
	cout << numeric_limits<short>::max() << endl;
	cout << numeric_limits<short>::min() << endl;
	cout << numeric_limits<short>::lowest() << endl;
	
	s = 32767;
	s += 1; // 32768
	
	cout << "32768? " << s << " overflow" << endl; // -32768 출력
	
	s = -32768;
	s -= 1;

	cout << "-32769? " << s << " overflow" << endl;

	cout << numeric_limits<int>::max() << endl;
	cout << numeric_limits<int>::min() << endl;

	cout << numeric_limits<unsigned int>::max() << endl;
	cout << numeric_limits<unsigned int>::min() << endl;
	
	cout << 22 / 4 /* 정수의 연산은 정수가 나온다. */ << endl;
	cout << (float)22 / 4 << endl;
	
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;
	return 0;
}