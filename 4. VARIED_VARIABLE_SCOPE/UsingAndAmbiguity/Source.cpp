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
	// �����ϸ� using namespace�� �������� ������� ����.
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