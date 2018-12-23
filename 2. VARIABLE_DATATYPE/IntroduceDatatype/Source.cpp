#include <iostream>

int main()
{
	using namespace std;

	/*bool bValue = false;

	cout << (bValue ? 1 : 0) << endl;*/

	bool bValue = true; // false�� 0, true�� 0�� �ƴ� ��
	/*char chValue = 'A';*/
	char chValue = 65;
	float fValue = 3.141592f; // �������� ����
	double dValue = 3.141592;
	// 3.141592�� double�̴�.

	auto aValue = 3.141592; // double�� �������� �� ������.
	auto aValue2 = 3.141592f;

	int int_size = 1;

	cout << chValue << endl;
	cout << bValue << endl;
	cout << fValue << endl; // 3.14159������ ����
	cout << dValue << endl;
	cout << sizeof(aValue) << "Byte" << endl;
	cout << sizeof(aValue2) << "Byte" << endl;
	cout << sizeof(bool) << "Byte" << endl;
	cout << sizeof(int) << "Byte" << endl;

	int a(123);		// direct initialization
	int b{ 123 };	// uniform initialization
	int c = 123;	// copy initialization

	// int a(3.14); // warning, ĳ�����ϸ� warning ������
	// int b{3.14}; // error
	// int c = 3.14; // warning, ĳ�����ϸ� warning ������

	int k = 753,
		l(159),
		m{ 123 }; // ���� �ڷ����� ���ÿ� ����

	return 0;
}

/* 
�⺻ �ڷ��� �Ұ�
char: 1Byte
int: 4Byte
bitset.cpp���� Ȯ��

ĳ���� Ÿ��
char: 8bits
char16_t: 16bits
char32-t: 32bits
wchar_t: ������, ���������� �Դٰ��� �Ҷ� ��

���� Ÿ��(signed ��ȣ)
signed char: 8bits
(signed) short (int): 16 bits
(signed) int: 16 bits
(signed) long (int): 32bits
(signed) long long (int): 64bits

���� Ÿ��(unsigned ��ȣ����)
unsigned char: 8
unsigned short (int): 16
unsigned (int): 16
unsigned long (int): 32
unsigned long long (int): 64

�ε��Ҽ���
float(�Ǽ�): 32bits
double: 64bits
long double

��/����
bool

���̵�
void: ����

NULL
decltype(nullptr)
*/