#include <iostream>

int main()
{
	int x; // initialization
	int y(123); // initialization
	// x��ü, ���ڸ� ���� �� �ִ� ������ �޸𸮿� �����Ѵ�.
	// �޸𸮿� �ִ� ������ �̸�
	x = 123; // assignment operator �Ҵ�, ���Կ�����
	// x�� ����Ű�� �޸� ������ 123�� ����
	// L-value: x, R-value: 123
	x = x + 2;
	// L-value: x, R-value: x + 2, x���� �������ͼ� R-value�� ��

	//release���� init�� �ȵǸ� ��Ÿ�ӿ��� ���ϰ� �� �ع���

	std::cout << x << std::endl; // 123�� ����
	std::cout << &x << std::endl; // �޸� �ּҰ��� ����
	return 0;
}