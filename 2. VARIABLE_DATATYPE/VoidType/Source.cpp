/*
	void, ������ �� �� ���� ��
*/
#include <iostream>

void my_function(void)
{

}

int main()
{
	//void my_void; // void�� �޸𸮸� �������� �ʱ� ������ ���� �� �� ����.

	int i = 123;
	float f = 123.456f;

	void *my_void; // �ּҸ� ǥ���ϴ� ���� int�� float�� �Ȱ���.

	my_void = (void*)&i; // ������ ������ �ּ�
	std::cout << my_void << std::endl;
	my_void = (void*)&f; // �Ǽ��� ������ �ּ�
	std::cout << my_void << std::endl;
}