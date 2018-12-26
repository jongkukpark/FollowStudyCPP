#include <iostream>

using namespace std;

int main()
{
	int x = (4 + 2) * 3; // add(4, mult(2, 3))
	// 그래프를 만들어서 무엇을 먼저 계산할지 결정함.
	// 곱하기는 괄호가 있는 것 처럼.
	cout << x << endl;

	int a = 3 * 4 / 2;
	cout << a << endl;

	int b = pow(2, 3);
	cout << b << endl;
	return 0;
}