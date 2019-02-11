#include <iostream>

using namespace std;

int getInt()
{
	while (true)
	{
		cout << "Enter an integer number: ";
		int x;
		cin >> x;

		if (std::cin.fail()) // i/o ������ true ����
		{
			std::cin.clear(); // true�� �� ���� ���� �ʱ�ȭ
			std::cin.ignore(32767, '\n'); // ���� �ڸ���
			cout << "Invalid number, please try again" << endl;
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return x;
		}
	}
	
}

char getOperator()
{
	while (true)
	{
		cout << "Enter and operator (+, -): ";
		char op;
		cin >> op;

		std::cin.ignore(32767, '\n');
		
		
		return op;
	}
	
}

void printResult(int x, char op, int y)
{
	switch (op)
	{
	case '+':
		cout << x + y << endl;
		break;
	case '-':
		cout << x - y << endl;
		break;
	default:
		cout << "Invalid operator" << endl;
		break;
	}
}

int main()
{
	int x = getInt();
	char op = getOperator();
	int y = getInt();

	printResult(x, op, y);

	return 0;
}