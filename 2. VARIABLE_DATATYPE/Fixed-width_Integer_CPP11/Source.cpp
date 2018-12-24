#include <iostream>
//#include <cstdint> // iostream 사용중이면 별도로 안해도 됨.

int main()
{
	using namespace std;

	std::int16_t i(5);
	std::int8_t myint = 6; // char임... 걍 쓰지 말자

	cout << myint << endl;

	int_fast8_t fi(5); // 제일 빠른거
	int_least64_t fl(5); // 적어도 8바이트

	// 당장 쓸일은 없음
}