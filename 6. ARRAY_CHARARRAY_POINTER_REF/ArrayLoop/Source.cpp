#include <iostream>

int main()
{
	using namespace std;

	int scores[] = { 84, 92, 76, 81, 56 };

	const int num_students = sizeof(scores) / sizeof(int);

	int max_score = numeric_limits<int>::min();
	int min_score = numeric_limits<int>::max();
	int total_score = 0;

	for (int i = 0; i < num_students; i++)
	{
		total_score += scores[i];
		max_score = max_score < scores[i] ? scores[i] : max_score;
		min_score = min_score > scores[i] ? scores[i] : min_score;
	}

	double avg_score = static_cast<double>(total_score) / num_students;
	
	cout << "Max: " << max_score << endl;
	cout << "Min: " << min_score << endl;
}