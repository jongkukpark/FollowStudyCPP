#include <iostream>
#include <cmath>

int main()
{
	using namespace std;

	/*int x, y;
	cin >> x >> y;
	cout << "input: " << x << " " << y << endl;

	if (x == y)
		cout << "equal" << endl;
	if (x != y)
		cout << "Not equal" << endl;
	if (x > y)
		cout << "x is greater than y" << endl;
	if (x < y)
		cout << "x is less than y" << endl;
	if (x >= y)
		cout << "x is greater than y or equal to y" << endl;
	if (x <= y)
		cout << "x is less than y or equal to y" << endl;
*/

	double d1(100 - 99.99);
	double d2(10 - 9.99);
	// �ε��Ҽ������� �񱳴� ������ �����.
	// ���� ���� ���� ���� �������� ���� �ٽ� ����Ѵ�.
	if (d1 == d2)
		cout << "equal" << endl;
	else
	{ 
		cout << "not equal" << endl;
		
		if (d1 > d2)
			cout << "d1 > d2" << endl;
		else
			cout << "d2 > d1" << endl;
	}

	cout << d1 << " " << d2 << endl;

	cout << std::abs(d1 - d2) << endl; // �ſ� ���� ��

	const double epsilon = 1e-16;

	if (std::abs(d1 - d2) < epsilon)
		cout << "Approximately equal" << endl;
	else
		cout << "Not equal" << endl;

	return 0;
}