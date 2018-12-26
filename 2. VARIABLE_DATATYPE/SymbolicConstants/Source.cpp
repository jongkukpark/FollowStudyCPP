#include <iostream>
#include "My_CONSTANTS.h"

using namespace std;

#define PRICE_PER_ITEM 30 // c++에서는 상수 거의 안씀
// 디버그가 힘듦, CPP파일 전체에 영향을 미침

void printNumber(const int my_number)
{
	cout << my_number << endl;
}

int main()
{
	double radius;
	cin >> radius;
	double circumference = 2.0 * radius * constants::pi;

	const int num_item = 123; // const는 몰아 넣는 경향이 있음

	int price = num_item * 30;

	const double gravity{ 9.8 }; // 고정, 못바꿈, 반드시 초기화해야함
	// 이미 초기화 되어있음. 컴파일타임 constexpr

	constexpr int my_const(123);

	int number;
	cin >> number;

	const int special_number(number); // 런타임
	// 실행을 해봐야 할 수 있음. 런타임이라 constexpr 사용 불가
	return 0;
}