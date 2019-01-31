#include <iostream>

using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE
};

void printColorName(Colors color)
{
	//if (color == Colors::BLACK)
	//	cout << "BLACK" << endl;
	//else if (color == Colors::WHITE)
	//	cout << "WHITE" << endl;
	//else if (color == Colors::RED)
	//	cout << "RED" << endl;
	// ...
	switch (color) // static_cast<int>(color)
	{
	case Colors::BLACK: // 0
		cout << "BLACK" << endl;
		break;
	case Colors::WHITE: // 1
		cout << "WHITE" << endl;
		break;
	case Colors::RED:
		cout << "RED" << endl;
		break;
	case Colors::GREEN:
		cout << "GREEN" << endl;
		break;
	case Colors::BLUE:
		cout << "BLUE" << endl;
		break;
	default:
		break;
	}
}

int main()
{
	int x;
	cin >> x;

	switch (x)
	{
		int a; // 선언 가능
		//int b = 5; // 정의 불가능
	case 0:
		int y; // case 안에 선언해도 위에서 선언한 것처럼 됨.
		break;
	case 1:
		y = 5;
		cout << y << endl;
		break;
	default:
		break;
	}

	{
		/*switch (x)
		{
		case 0:
			cout << "Zero";
			break;
		case 1:
			cout << "One";
			break;
		case 2:
			cout << "Two";
			break;
		default:
			break;
		}

		cout << endl;*/
	}
}