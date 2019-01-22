#include <iostream>
#include <bitset>
// 일반적으로 bitwise에는 unsigned를 사용함. 복잡해져서

int main()
{
	// bool은 1byte 근데 0, 1만 표현하면 됨.
	using namespace std;
	
	// 6가지 연산자ㅅ
	// << left shift, operator overloading을 하여 스트림의 용도로 사용한다.
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
	// 곱하기보다 shift가 훨씬 빠르다.

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