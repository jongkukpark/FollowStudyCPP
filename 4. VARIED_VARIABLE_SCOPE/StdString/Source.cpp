#include <iostream>
#include <string> // 일종의 사용자 정의 자료형
#include <limits>

int main()
{
	using namespace std;

	const char my_strs[] = "Hello, World!";
	const string my_hello = "Hello, World!";

	cout << my_hello << endl;
	cout << my_strs << endl;

	cout << "Your age ?: ";
	//string age;
	//cin >> age;
	int age;
	//getline(cin, age);
	cin >> age;
	cin.ignore(std::numeric_limits<streamsize>::max(), '\n');

	cout << "Your name ?: ";
	string name;
	//cin >> name;
	getline(cin, name);

	cout << name << " " << age << endl;

	string a = "Hello, ";
	string b = "World! ";
	string hw = a + b; // append

	hw += "I'm good!";

	cout << hw << endl;
	cout << a.length() << endl;

	return 0;
}