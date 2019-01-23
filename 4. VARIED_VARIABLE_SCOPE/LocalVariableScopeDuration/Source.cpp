#include <iostream>

namespace work1
{
	namespace work11::work111 // C++17
	{
		int a = 1;
		void doSomething()
		{
			a += 3;
		}
	}
	int a = 1;
	// ������ �������� ���͵� �Ǵµ� ���Ǵ� �ϳ��� �ؾ��Ѵ�.
	void doSomething()
	{
		a += 3;
	}
}

namespace work2
{
	int a = 1;
	void doSomething()
	{
		a += 5;
	}
}


int main()
{
	using namespace std;

	// apple = 1 // apple is undefined, scope

	int apple = 5;
	cout << apple << endl;

	{
		apple = 1; // 5 -> 1
		cout << apple << endl;

		int apple = 1; // int apple = 5�� ������. ���� �̸��� ������ �ٸ� �����̴�. �׷��Ƿ� ���ʿ� �̸��� �ٸ��� �����.
		cout << apple << endl;
	}

	cout << apple << endl;

	work1::a; // ::�� scope resolution
	work1::doSomething();

	work1::work11::work111::a;
	work1::work11::work111::doSomething();

	work2::a;
	work2::doSomething();

	return 0;
}

// apple = 3 // apple is undefined, �޸𸮰� �ݳ���.