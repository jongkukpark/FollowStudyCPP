// 결론은 헤더 가드를 쓰면 된다.
#include <iostream>
#include "doSomething.h"
#include "add.h"
// 위에처럼 하면 중복으로 정의가 되어버림
// 링크에러는 잡아주기 힘들다.

using namespace std;

int main()
{
	doSometing();
	return 0;
}