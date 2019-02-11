#include <iostream>

using namespace std;

int getInt()
{
	while (true)
	{
		cout << "Enter an integer number: ";
		int x;
		cin >> x;

		if (std::cin.fail()) // i/o 오류시 true 리턴
		{
			std::cin.clear(); // true가 된 상태 값을 초기화
			std::cin.ignore(32767, '\n'); // 버퍼 자르기
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