#include <iostream>
#include <bitset>
// �Ϲ������� bitwise���� unsigned�� �����. ����������

int main()
{
	// bool�� 1byte �ٵ� 0, 1�� ǥ���ϸ� ��.
	using namespace std;
	
	// 6���� �����ڤ�
	// << left shift, operator overloading�� �Ͽ� ��Ʈ���� �뵵�� ����Ѵ�.
	// >> right shift
	// ~ not
	// & and
	// | or
	// ^ xor

	unsigned int a = 3;

	//cout << std::bitset<8>(a) << endl; // 00000000

	//unsigned int b = a << 3; // 0011 -> 0110
	//unsigned int b = 3 << 2 // 0011 -> 1100

	cout << "left shift" << endl;
	cout << std:: bitset<16>(a) << " " << a << endl;

	cout << std::bitset<16>(a << 1) << " " << (a << 1) << endl;
	cout << std::bitset<16>(a << 2) << " " << (a << 2) << endl;
	cout << std::bitset<16>(a << 3) << " " << (a << 3) << endl;
	cout << std::bitset<16>(a << 4) << " " << (a << 4) << endl;
	// ���ϱ⺸�� shift�� �ξ� ������.

	a = 1024;

	cout << "\nright shift" << endl;
	cout << std::bitset<16>(a) << " " << a << endl;

	cout << std::bitset<16>(a >> 1) << " " << (a >> 1) << endl;
	cout << std::bitset<16>(a >> 2) << " " << (a >> 2) << endl;
	cout << std::bitset<16>(a >> 3) << " " << (a >> 3) << endl;
	cout << std::bitset<16>(a >> 4) << " " << (a >> 4) << endl;

	cout << "\nnot" << endl;
	cout << std::bitset<16>(~a) << " " << ~a << endl;

	cout << std::bitset<16>(~a >> 1) << " " << (~a >> 1) << endl;
	cout << std::bitset<16>(~a >> 2) << " " << (~a >> 2) << endl;
	cout << std::bitset<16>(~a >> 3) << " " << (~a >> 3) << endl;
	cout << std::bitset<16>(~a >> 4) << " " << (~a >> 4) << endl;
	
	cout << endl;
	unsigned int b = 0b1100;
	unsigned int c = 0b0110;

	cout << b << " " << c << endl;
	cout << std::bitset<4>(b & c) << endl;
	cout << std::bitset<4>(b | c) << endl;
	cout << std::bitset<4>(b ^ c) << endl;

	cout << endl;
	unsigned int x = 0b0110;
	cout << "0110 >> 2: " << endl;
	cout << std::bitset<8>(x >> 2) << " " << (x >> 2) << endl; // 0110 >> 2 -> decimal: 
	cout << " 5: " << bitset<4>(5) << "\n12: " << bitset<4>(12) << endl;
	cout << "or: "<< std::bitset<4>(5 | 12) << " " << (5 | 12) << endl; // 5 | 12
	cout << "and: " << bitset<4>(5 & 12) << " " << (5 & 12) << endl;// 5 & 12
	cout << "xor: " << bitset<4>(5 ^ 12) << " " << (5 ^ 12) << endl;// 5 ^ 12
 
	return 0;
}