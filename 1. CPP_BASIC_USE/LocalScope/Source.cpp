#include <iostream>

using namespace std;

int main()
{
	int x = 0;
	//int x(0);

	cout << x << " " << &x/* x�� �ּ� �� ��� */ << endl;

	{// ������ �и����ִ� ��
		//int x = 1; // ����, �ٸ� �޸𸮸� ����
		x = 1;
		cout << x << " " << &x/* x�� �ּ� �� ��� */ << endl;
	}

	cout << x << " " << &x/* x�� �ּ� �� ��� */ << endl;

	{
		int x = 2;
		cout << x << " " << &x/* x�� �ּ� �� ��� */ << endl;
	}

	cout << x << " " << &x/* x�� �ּ� �� ��� */ << endl;
	return 0;
}