/*
	아스키코드표 참조.
*/

#include <iostream>

int main()
{
	using namespace std;

	char c1(65); // c1 = 65; c1{65};
	char c2('A'); // 한 글자 표현은 작은따옴표. 문자열은 쌍따옴표, 문자열 std::string
	wchar_t c;
	char32_t c4; // 유니코드


	cout << sizeof(char) << endl;
	cout << numeric_limits<char>::max() << endl;
	cout << (int)numeric_limits<char>::lowest << endl;

	cout << int('\t') << endl;
	cout << "This is first line \a\tsecond line \"" << endl;
	
	
	cout << int('\n') << endl; // endl은 버퍼에 있는걸 싹 다 빼버림.
	cout << "This is first line \nsecond line\n";
	cout << "This is first line " << endl;
	cout << "second line" << endl;;
	// std::flush 버퍼를 초기화하고 줄바꿈 안함

	cin >> c1; // 두 글자 입력해도 첫 글자만 받음. 근데 버퍼에 있음.
	cin >> c2;
	cout << c1 << " " << static_cast<int>(c1) << endl;

	//cin >> c1; // 두 글자 입력해도 첫 글자만 받음. 근데 버퍼에 있음.
	//cout << c1 << " " << static_cast<int>(c1) << endl;
	//cin >> c1; // 두 글자 입력해도 첫 글자만 받음. 근데 버퍼에 있음.
	//cout << c1 << " " << static_cast<int>(c1) << endl;
	//cin >> c1; // 두 글자 입력해도 첫 글자만 받음. 근데 버퍼에 있음.
	//cout << c1 << " " << static_cast<int>(c1) << endl;
	
	
	cout << c1 << " " << c2 << " " << (int)c1 << " " << (int)c2 << endl;

	// c-style casting
	cout << (char)65 << endl;
	cout << (int)'A' << endl;

	// c++-style casting
	cout << char(65) << endl;
	cout << int('A') << endl;

	cout << static_cast<char>(65) << endl; // static cast와 dynamic cast가 있음.
	cout << static_cast<int>('A') << endl; // 기본타입들 간에 캐스팅 할 때 미리 체크좀 해주세요~ 하는거임

	char ch(97);
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl; // 캐스팅해도 원래 값이 바뀌진 않음.
	cout << ch << endl;

	return 0;
}