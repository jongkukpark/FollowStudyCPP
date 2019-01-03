/*
	sizeof: 데이터형의 크기
*/

#include <iostream>

int main()
{
	using namespace std;

	float a;

	sizeof(float); // 데이터타입, 괄호 있어야 함
	// 4bytes = 4*8 = 32bits
	sizeof a; // 변수, 변수명은 괄호 없어도 됨.
	// 사용자가 만든 자료형에도 sizeof를 사용가능.
	// sizeof는 함수가 아닌 operator이다.

	int x = 3,
		y = 10,
		z = (++x, ++y);
	// 쉼표 연산자: ++x가 계산되고, ++y가 계산된 후
	// z = y가 됨.
	// z = (++x, ++y)는
	// ++x;
	// ++y;
	// int z = y; 와 같다. for문에서 유용하게 쓰임.

	cout << x << " " << y << " " << z << endl;

	int b = 1,
		c = 10;
	int d;

	d = b, c; // ,는 =보다 우선 순위가 낮아서 (d = b), b;가 되었다.

	cout << d << endl;

	// conditional operator ( arithmetic if )
	bool onSale = true;

	const int price = (onSale ? 10 : 100);

	/*int price; // 여기서는 price를 const로 하지 못함.

	if (onSale)
		price = 10;
	else
		price = 100;*/

	cout << price << endl;
		
	int e = 5;

	cout << ((x % 2 == 0) ? "even" : "odd") << endl;
	// <<가 
	return 0;
}