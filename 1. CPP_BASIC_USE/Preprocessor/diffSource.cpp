#include <iostream>

#define LIKE_APPLE

void doSomething()
{
	using namespace std;

#ifdef LIKE_APPLE
	cout << "Apple" << endl;
#else
	cout << "Orange" << endl;
#endif // !LIKE_APPLE
}