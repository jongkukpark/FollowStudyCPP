/*
	void, 포인터 쓸 때 많이 씀
*/
#include <iostream>

void my_function(void)
{

}

int main()
{
	//void my_void; // void는 메모리를 차지하지 않기 때문에 선언 할 수 없다.

	int i = 123;
	float f = 123.456f;

	void *my_void; // 주소를 표현하는 값은 int나 float나 똑같다.

	my_void = (void*)&i; // 정수형 변수의 주소
	std::cout << my_void << std::endl;
	my_void = (void*)&f; // 실수형 변수의 주소
	std::cout << my_void << std::endl;
}