#include <iostream>
#include <cstdio>

int main()
{
	using namespace std;
	
	int y = 1; // 최대 2147483647
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
	// \t를 사용하면 줄맞춤이 됨(tab 처럼 나옴).. 개쩐다

	cout << "\a"; //오디오. 띵동하는 소리 출력

	return 0;
}