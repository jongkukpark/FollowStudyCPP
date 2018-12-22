#include <iostream>

using namespace std;

int main()
{
	int x = 0;
	//int x(0);

	cout << x << " " << &x/* x의 주소 값 출력 */ << endl;

	{// 영역을 분리해주는 것
		//int x = 1; // 가능, 다른 메모리를 잡음
		x = 1;
		cout << x << " " << &x/* x의 주소 값 출력 */ << endl;
	}

	cout << x << " " << &x/* x의 주소 값 출력 */ << endl;

	{
		int x = 2;
		cout << x << " " << &x/* x의 주소 값 출력 */ << endl;
	}

	cout << x << " " << &x/* x의 주소 값 출력 */ << endl;
	return 0;
}