#include <iostream>

namespace a
{
	int my_var(10);
	int my_a(123);
	int count(0);
}

namespace b
{
	int my_var(20);
	int my_b(456);
}

int main()
{
	using namespace std;
	/*using std::cout;
	using std::endl;*/
	// 웬만하면 using namespace를 전역에서 사용하지 말자.
	// using namespace a;
	// using namespace b;

	// cout << my_var << endl; ambiguous
	cout << a::my_a << endl;
	cout << b::my_b << endl;
	{
		using namespace a;
		cout << my_var << endl;
		cout << a::count << endl;
	}

	{
		using namespace b;
		cout << my_var << endl;
	}

	return 0;
}