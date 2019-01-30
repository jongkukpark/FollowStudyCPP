#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
	using namespace std;

	typedef double distance_t; // 프로그래밍 편의를 위해
	
	// std::int8_t i(97); 고정너비정수

	double		my_distance;
	distance_t	home2work;
	distance_t	home2school;

	// typedef vector<pair<string, int>> pairlist_t; // 사용 가능
	using pairlist_t = vector<pair<string, int>>;
	
	pairlist_t pairlist1;
	pairlist_t pairlist2;
	
	return 0;
}