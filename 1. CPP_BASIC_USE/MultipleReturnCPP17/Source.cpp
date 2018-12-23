#include <iostream>
#include <tuple> // 옛날 방법
// 이 기능은 C++ 17 이후에만 작동가능함.
using namespace std;

auto my_func()
{
	return tuple(123, 456, 789);
}
//tuple<int, int> my_func(); // 옛날방법

int main()
{
	/*tuple<int, int> result = my_func(); // 옛날방법

	cout << get<0>(result) << " " << get<1>(result) << endl;*/
	
	/*auto result = my_func();
	cout << get<0>(result) << " " << get<1>(result) << " " << get<2>(result) << endl;*/

	auto[a, b, c] = my_func();

	cout << a << " " << b << " " << c << endl;

	return 0;
}

//tuple<int, int> my_func() // 옛날방법
//{
//	return tuple<int, int>(123, 456);
//}
