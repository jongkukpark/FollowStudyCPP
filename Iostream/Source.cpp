#include <iostream>
#include <cstdio>

int main()
{
	using namespace std;
	
	int y = 1; // �ִ� 2147483647
	cout << "Before your input, y was " << y << endl;
	cin >> y;
	cout << "Your input is " << y << endl;

	int x = 1024;
	double pi = 3.141592;

	cout << // output operator
		"I love this lecture!\n\n\n";// << std::endl;
	cout << "x is " << x << " pi is "<< pi << endl;
	
	cout << "abc" << "\t" << "def" << endl;
	cout << "ab" << "\t" << "cdef" << endl;
	// \t�� ����ϸ� �ٸ����� ��(tab ó�� ����).. ��¾��

	cout << "\a"; //�����. ���ϴ� �Ҹ� ���

	return 0;
}