#include <iostream>
#include <typeinfo>

//int computeDamage(int weapon_id) // 숫자로 쓰면 외우기 힘듦.
//{
//	if (weapon_id == 0) // sword
//	{
//		return 1;
//	}
//	if (weapon_id == 1) // hammer
//	{
//		return 2;
//	}
//}

enum Color // 사용자 정의 자료형, users defined data type
{
	COLOR_BALCK = -3, // 숫자를 담고 있음
	COLOR_RED = -1,
	COLOR_BLUE,
	COLOR_GREEN,
	COLOR_SKYBLUE,
	// BLUE // enum에서 같은 이름으로 정의하면 안됨.
}; // 반드시 세미콜론

//enum Feeling
//{
//	HAPPY,
//	JOY,
//	TIRED,
//	BLUE
//};

int main()
{
	using namespace std;

	Color paint = COLOR_BALCK;
	Color house(COLOR_BLUE);
	Color apple{ COLOR_RED };

	int color_id = COLOR_RED; // 됨.
	// Color my_color = color_id; // 안됨.
	Color my_color = static_cast<Color>(color_id); // 됨.

	cout << paint << endl;
	// cin >> my_color; // 안됨.
	
	int in_number;
	cin >> in_number;

	if (in_number == 0) my_color = COLOR_BALCK;
	// ...

	return 0;
}