#include <iostream>

int main()
{
	using namespace std;

	/*bool bValue = false;

	cout << (bValue ? 1 : 0) << endl;*/

	bool bValue = true; // false는 0, true는 0이 아닐 때
	/*char chValue = 'A';*/
	char chValue = 65;
	float fValue = 3.141592f; // 정밀하진 않음
	double dValue = 3.141592;
	// 3.141592는 double이다.

	auto aValue = 3.141592; // double로 컴파일할 때 결정됨.
	auto aValue2 = 3.141592f;

	int int_size = 1;

	cout << chValue << endl;
	cout << bValue << endl;
	cout << fValue << endl; // 3.14159까지만 나옴
	cout << dValue << endl;
	cout << sizeof(aValue) << "Byte" << endl;
	cout << sizeof(aValue2) << "Byte" << endl;
	cout << sizeof(bool) << "Byte" << endl;
	cout << sizeof(int) << "Byte" << endl;

	int a(123);		// direct initialization
	int b{ 123 };	// uniform initialization
	int c = 123;	// copy initialization

	// int a(3.14); // warning, 캐스팅하면 warning 없어짐
	// int b{3.14}; // error
	// int c = 3.14; // warning, 캐스팅하면 warning 없어짐

	int k = 753,
		l(159),
		m{ 123 }; // 같은 자료형만 동시에 선언

	return 0;
}

/* 
기본 자료형 소개
char: 1Byte
int: 4Byte
bitset.cpp에서 확인

캐릭터 타입
char: 8bits
char16_t: 16bits
char32-t: 32bits
wchar_t: 윈도우, 리눅스에서 왔다갔다 할때 씀

정수 타입(signed 부호)
signed char: 8bits
(signed) short (int): 16 bits
(signed) int: 16 bits
(signed) long (int): 32bits
(signed) long long (int): 64bits

정수 타입(unsigned 부호없음)
unsigned char: 8
unsigned short (int): 16
unsigned (int): 16
unsigned long (int): 32
unsigned long long (int): 64

부동소수점
float(실수): 32bits
double: 64bits
long double

참/거짓
bool

보이드
void: 없다

NULL
decltype(nullptr)
*/