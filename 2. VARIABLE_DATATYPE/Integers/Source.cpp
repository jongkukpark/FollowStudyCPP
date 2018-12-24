/*				�ּ�ũ��
	char:		1byte
	short:		2bytes
	int:		2bytes, ��κ� 4bytes
	long:		4bytes
	long long:	8bytes
*/
#include <iostream>
#include <cmath>
#include <limits>

int main()
{
	using namespace std;
	
	short		s = 1; // 2bytes = 18bits
	int			i = 1; // signed 32bits, ù ��Ʈ�� ��ȣ ǥ��
	long		l = 1;
	long long	ll = 1;
	
	// ���� ������ �Ѿ�� ������ �����
	cout << (pow(2, (sizeof(short) * 8) - 1/* ��ȣ */) - 1/* 0 */) << endl; // ǥ�� �� �� �ִ� ���� ū ����
	cout << numeric_limits<short>::max() << endl;
	cout << numeric_limits<short>::min() << endl;
	cout << numeric_limits<short>::lowest() << endl;
	
	s = 32767;
	s += 1; // 32768
	
	cout << "32768? " << s << " overflow" << endl; // -32768 ���
	
	s = -32768;
	s -= 1;

	cout << "-32769? " << s << " overflow" << endl;

	cout << numeric_limits<int>::max() << endl;
	cout << numeric_limits<int>::min() << endl;

	cout << numeric_limits<unsigned int>::max() << endl;
	cout << numeric_limits<unsigned int>::min() << endl;
	
	cout << 22 / 4 /* ������ ������ ������ ���´�. */ << endl;
	cout << (float)22 / 4 << endl;
	
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;
	return 0;
}