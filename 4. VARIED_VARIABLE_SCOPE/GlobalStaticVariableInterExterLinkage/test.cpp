#include <iostream>
#include "MyConstant.h"

extern int a = 123;

void doSomething()
{
	using namespace std;
	cout << "Hello " << endl;

	cout << "In test: " << Constants::pi << " " << &Constants::pi << endl;
}