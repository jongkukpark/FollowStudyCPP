#include <iostream>
using namespace std;

//int main() 
//{
//	int a, b;
//	cin >> a >> b;
//	cout << a + b << endl;
//	
//	for (int i = 0; i < a + b; i++)
//	{
//		cout << i << " ";
//	}
//
//	cout << endl;
//
//	if (a + b > 3)
//	{
//		cout << "3보다 큼";
//	}
//	else
//	{
//		cout << "3보다 작음";
//	}
//	return 0;
//}

int doSomething(int x);

int main()
{
	int x = 0;
	cout << x << endl;
	x = doSomething(x);
	cout << x << endl;
}

int doSomething(int x)
{
	x = 123;
	cout << x << endl;
	return x;
}