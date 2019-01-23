#include <iostream>
#include "MyConstant.h"

using namespace std;

//전역 변수
int value = 123;
// int a = 1;

//void doSomething()
//{
//	static int a = 1; // 정적 변수, 반드시 초기화가 되어야 함.
//	++a;
//	cout << a << endl;
//}

// forward declaration
extern void doSomething(); // test.cpp에 있는게 링킹됨.
// extern은 생략해서 쓸 수 있음
extern int a/* = 456*/; // 두번 정의하지 마십쇼.

/*
	int g_x; // external linkage
	static int g_x; // internal linkage
	const int g_x; // X

	extern int g_z;
	extern const int g_z;

	int g_y(1); // external linkage
	static int g_y(1); // internal linkage
	const int g_y(1); // 일반적인 상수선언

	extern int g_w(1); // 한번 초기화를 하면 다른 곳에서 초기화 하면 안됨.
	extern const int g_w(1);
*/

int main(void)
{
	cout << value << endl;

	int value = 1; // 지역 변수, 블록을 벗어나면 반납됨. 네임하이딩이 발생한다.
	cout << value << endl;
	cout << ::value << endl; // 전역 변수에 접근

	/*for (int i = 0; i < 4; i++)
		doSomething();*/

	cout << a << endl;

	cout << "In Source: " << Constants::pi << " " << &Constants::pi << endl;
	doSomething();
	// Source와 test에서 주소가 서로 다르게 나옴. 사본이 생긴다는 것.
	return 0;
}