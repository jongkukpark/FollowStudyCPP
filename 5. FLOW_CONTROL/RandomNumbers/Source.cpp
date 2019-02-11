#include <iostream>
#include <cstdlib> // std::radn(), std::srand()
#include <ctime>

#include <random> // 랜덤 라이브러리

using namespace std;

unsigned int PRNG()
{
	static unsigned int seed = 5523;

	seed = 8253729 * seed + 2396403;

	return seed % 32768;
}

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0);

	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

int main()
{
	////std::srand(5323); // seed 설정, 시드가 동일하면 값이 동일
	//std::srand(static_cast<unsigned int>(std::time(0)));

	//for (int count = 1; count <= 100; ++count)
	//{
	//	cout << rand() % 4 + 5 << "\t";

	//	if (count % 5 == 0)
	//		cout << endl;
	//}

	std::random_device rd;
	std::mt19937 mesenne(rd()); // create a mesenne twister, time과 유사하게 작동
	std::uniform_int_distribution<> dice(1, 6);

	for (int count = 1; count <= 20; ++count)
	{
		cout << dice(mesenne) << endl;
	}
}