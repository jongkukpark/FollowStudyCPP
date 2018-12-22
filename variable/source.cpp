#include <iostream>

int main()
{
	int x; // initialization
	int y(123); // initialization
	// x객체, 숫자를 담을 수 있는 공간을 메모리에 차지한다.
	// 메모리에 있는 공간의 이름
	x = 123; // assignment operator 할당, 대입연산자
	// x가 가리키는 메모리 공간에 123을 저장
	// L-value: x, R-value: 123
	x = x + 2;
	// L-value: x, R-value: x + 2, x에서 값가져와서 R-value가 됨

	//release에서 init가 안되면 런타임에러 안하고 걍 해버림

	std::cout << x << std::endl; // 123이 나옴
	std::cout << &x << std::endl; // 메모리 주소값이 나옴
	return 0;
}