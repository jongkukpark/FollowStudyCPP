#include <iostream>
//#include <cstdint> // iostream ������̸� ������ ���ص� ��.

int main()
{
	using namespace std;

	std::int16_t i(5);
	std::int8_t myint = 6; // char��... �� ���� ����

	cout << myint << endl;

	int_fast8_t fi(5); // ���� ������
	int_least64_t fl(5); // ��� 8����Ʈ

	// ���� ������ ����
}