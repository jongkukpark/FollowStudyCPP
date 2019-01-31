#include <iostream>

using namespace std;

int main()
{
	cout << "While-loop test" << endl;
	int count = 0;
	while (1)
	{
		//static int count = 0;
		cout << count << endl;
		count++;

		if (count == 10)
			break;
	}

	unsigned int count2 = 10; // overflow
	// unsigned는 카운트로 사용하면 - 할 때 오버플로우가 발생하기 때문에
	// 사용하지 않는 것이 좋다.

	while (count2 >= 0)
	{
		if (count2 == 0)
			cout << "zero" << endl;
		else
			cout << count2 << endl;

		count2--;
	}

	return 0;
}