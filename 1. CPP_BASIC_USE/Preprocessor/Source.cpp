#include <iostream>
#include <algorithm>

using namespace std;

#define MY_NUMBER 9 // ��ũ��
#define MY_STRING "Hello, World!"
#define MAX(a, b) ((a > b) ? a : b)
// #define MAX(a, b) (a > b) ? a : b // �̷��� �ϸ� �ȵ�
#define LIKE_APPLE // ������ ���ǵǾ� �ִ� ���� �ȿ����̴�.

void doSomething();

int main()
{
	doSomething();
#ifdef LIKE_ORANGE
	cout << "Apple" << endl;
#endif // LIKE_ORANGE

#ifndef LIKE_ORANGE
	cout << "Orange" << endl;
#endif // !LIKE_ORANGE


	cout << MY_NUMBER << endl;

	cout << MY_STRING << endl;

	cout << MAX(1 + 3, 2) << endl;

	cout << max(2 + 3, 2) << endl;

	return 0;
}