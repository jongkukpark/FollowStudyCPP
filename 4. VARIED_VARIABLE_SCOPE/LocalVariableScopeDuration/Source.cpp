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
	// 선언은 여기저기 나와도 되는데 정의는 하나만 해야한다.
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

		int apple = 1; // int apple = 5가 숨겨짐. 따라서 이름은 같지만 다른 변수이다. 그러므로 애초에 이름을 다르게 지어라.
		cout << apple << endl;
	}

	cout << apple << endl;

	work1::a; // ::은 scope resolution
	work1::doSomething();

	work1::work11::work111::a;
	work1::work11::work111::doSomething();

	work2::a;
	work2::doSomething();

	return 0;
}

// apple = 3 // apple is undefined, 메모리가 반납됨.