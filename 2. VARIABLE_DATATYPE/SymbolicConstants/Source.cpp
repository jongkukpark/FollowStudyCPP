#include <iostream>
#include "My_CONSTANTS.h"

using namespace std;

#define PRICE_PER_ITEM 30 // c++������ ��� ���� �Ⱦ�
// ����װ� ����, CPP���� ��ü�� ������ ��ħ

void printNumber(const int my_number)
{
	cout << my_number << endl;
}

int main()
{
	double radius;
	cin >> radius;
	double circumference = 2.0 * radius * constants::pi;

	const int num_item = 123; // const�� ���� �ִ� ������ ����

	int price = num_item * 30;

	const double gravity{ 9.8 }; // ����, ���ٲ�, �ݵ�� �ʱ�ȭ�ؾ���
	// �̹� �ʱ�ȭ �Ǿ�����. ������Ÿ�� constexpr

	constexpr int my_const(123);

	int number;
	cin >> number;

	const int special_number(number); // ��Ÿ��
	// ������ �غ��� �� �� ����. ��Ÿ���̶� constexpr ��� �Ұ�
	return 0;
}