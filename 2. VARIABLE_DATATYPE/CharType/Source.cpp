/*
	�ƽ�Ű�ڵ�ǥ ����.
*/

#include <iostream>

int main()
{
	using namespace std;

	char c1(65); // c1 = 65; c1{65};
	char c2('A'); // �� ���� ǥ���� ��������ǥ. ���ڿ��� �ֵ���ǥ, ���ڿ� std::string
	wchar_t c;
	char32_t c4; // �����ڵ�


	cout << sizeof(char) << endl;
	cout << numeric_limits<char>::max() << endl;
	cout << (int)numeric_limits<char>::lowest << endl;

	cout << int('\t') << endl;
	cout << "This is first line \a\tsecond line \"" << endl;
	
	
	cout << int('\n') << endl; // endl�� ���ۿ� �ִ°� �� �� ������.
	cout << "This is first line \nsecond line\n";
	cout << "This is first line " << endl;
	cout << "second line" << endl;;
	// std::flush ���۸� �ʱ�ȭ�ϰ� �ٹٲ� ����

	cin >> c1; // �� ���� �Է��ص� ù ���ڸ� ����. �ٵ� ���ۿ� ����.
	cin >> c2;
	cout << c1 << " " << static_cast<int>(c1) << endl;

	//cin >> c1; // �� ���� �Է��ص� ù ���ڸ� ����. �ٵ� ���ۿ� ����.
	//cout << c1 << " " << static_cast<int>(c1) << endl;
	//cin >> c1; // �� ���� �Է��ص� ù ���ڸ� ����. �ٵ� ���ۿ� ����.
	//cout << c1 << " " << static_cast<int>(c1) << endl;
	//cin >> c1; // �� ���� �Է��ص� ù ���ڸ� ����. �ٵ� ���ۿ� ����.
	//cout << c1 << " " << static_cast<int>(c1) << endl;
	
	
	cout << c1 << " " << c2 << " " << (int)c1 << " " << (int)c2 << endl;

	// c-style casting
	cout << (char)65 << endl;
	cout << (int)'A' << endl;

	// c++-style casting
	cout << char(65) << endl;
	cout << int('A') << endl;

	cout << static_cast<char>(65) << endl; // static cast�� dynamic cast�� ����.
	cout << static_cast<int>('A') << endl; // �⺻Ÿ�Ե� ���� ĳ���� �� �� �̸� üũ�� ���ּ���~ �ϴ°���

	char ch(97);
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl; // ĳ�����ص� ���� ���� �ٲ��� ����.
	cout << ch << endl;

	return 0;
}