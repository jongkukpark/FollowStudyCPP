#include <iostream>
#include "MyConstant.h"

using namespace std;

//���� ����
int value = 123;
// int a = 1;

//void doSomething()
//{
//	static int a = 1; // ���� ����, �ݵ�� �ʱ�ȭ�� �Ǿ�� ��.
//	++a;
//	cout << a << endl;
//}

// forward declaration
extern void doSomething(); // test.cpp�� �ִ°� ��ŷ��.
// extern�� �����ؼ� �� �� ����
extern int a/* = 456*/; // �ι� �������� ���ʼ�.

/*
	int g_x; // external linkage
	static int g_x; // internal linkage
	const int g_x; // X

	extern int g_z;
	extern const int g_z;

	int g_y(1); // external linkage
	static int g_y(1); // internal linkage
	const int g_y(1); // �Ϲ����� �������

	extern int g_w(1); // �ѹ� �ʱ�ȭ�� �ϸ� �ٸ� ������ �ʱ�ȭ �ϸ� �ȵ�.
	extern const int g_w(1);
*/

int main(void)
{
	cout << value << endl;

	int value = 1; // ���� ����, ����� ����� �ݳ���. �������̵��� �߻��Ѵ�.
	cout << value << endl;
	cout << ::value << endl; // ���� ������ ����

	/*for (int i = 0; i < 4; i++)
		doSomething();*/

	cout << a << endl;

	cout << "In Source: " << Constants::pi << " " << &Constants::pi << endl;
	doSomething();
	// Source�� test���� �ּҰ� ���� �ٸ��� ����. �纻�� ����ٴ� ��.
	return 0;
}