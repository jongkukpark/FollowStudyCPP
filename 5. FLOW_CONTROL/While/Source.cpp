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
	// unsigned�� ī��Ʈ�� ����ϸ� - �� �� �����÷ο찡 �߻��ϱ� ������
	// ������� �ʴ� ���� ����.

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