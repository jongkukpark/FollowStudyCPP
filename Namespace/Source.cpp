#include <iostream>

using namespace std;

// 메소드 이름은 같지만 다른 기능을 하는 경우는 네임스페이스 사용

namespace MySpace1 
{
	namespace InnerSpace
	{
		int my_function()
		{
			return 0;
		}
	}
	int doSomething(int a, int b)
	{
		return a + b;
	}
}

namespace MySpace2
{
	int doSomething(int a, int b)
	{
		return a * b;
	}
}


int main()
{
	using namespace MySpace1::InnerSpace;
	using namespace MySpace1;
	doSomething(3, 4);

	my_function();
	
	//cout << MySpace1::doSomething(3, 4) << endl; // 위에꺼 실행됨

	//cout << MySpace2::doSomething(3, 4) << endl; // 아래꺼 실행됨
	
	return 0;
}