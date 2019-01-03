/*
	단항연산자: +, - / +1, -2
	이항연산자
	나머지 연산: %
	실수 나누기 정수는 실수
*/
#include <iostream>

int main()
{
	using namespace std;

	int x = 7;
	int y = -3 - -x;
	int z = x % y;

	cout << "몫: " << x / y << " 나머지: " << z << endl;

	cout << float(x) / y << endl;
	cout << x / float(y) << endl;
	cout << float(x) / float(y) << endl;

	cout << -5 / 2 << endl; // -2가 나옴, 뒤를 버림 C++11부터
	cout << -5 % 2 << endl; // 왼쪽(-5)에 따라 음수면 음, 양수면 양이나옴 C++11부터
	cout << 5 % -2 << endl;

	int a = x; // 대입연산자 =
	a += y; // a = a + y
	a -= y;
	a *= y;
	a /= y;
	a %= y;
	//코딩의 양을 줄여준다.

	return 0;
}