#include <iostream>

int main()
{
	/*enum Color
	{
		RED,
		BLUE
	};

	enum Fruit
	{
		BANANA,
		APPLE
	};

	Color color = RED;
	Fruit fruit = BANANA;

	if (color == fruit) std::cout << "SAMESAME" << std::endl;*/

	enum class Color
	{
		RED,
		BLUE
	};

	enum class Fruit
	{
		BANANA,
		APPLE
	};

	Color color = Color::RED;
	Fruit fruit = Fruit::BANANA;
	Color color1 = Color::BLUE;

	/*if (color == fruit) std::cout << "SAMESAME" << std::endl;*/ // �ٸ� �͵��� �� �ȵ�
	if (color == color1) std::cout << "SAMESAME" << std::endl;
}