#include <iostream>
#include <typeinfo>

//int computeDamage(int weapon_id) // ���ڷ� ���� �ܿ�� ����.
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

enum Color // ����� ���� �ڷ���, users defined data type
{
	COLOR_BALCK = -3, // ���ڸ� ��� ����
	COLOR_RED = -1,
	COLOR_BLUE,
	COLOR_GREEN,
	COLOR_SKYBLUE,
	// BLUE // enum���� ���� �̸����� �����ϸ� �ȵ�.
}; // �ݵ�� �����ݷ�

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

	int color_id = COLOR_RED; // ��.
	// Color my_color = color_id; // �ȵ�.
	Color my_color = static_cast<Color>(color_id); // ��.

	cout << paint << endl;
	// cin >> my_color; // �ȵ�.
	
	int in_number;
	cin >> in_number;

	if (in_number == 0) my_color = COLOR_BALCK;
	// ...

	return 0;
}