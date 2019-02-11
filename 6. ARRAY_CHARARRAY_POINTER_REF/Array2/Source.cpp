#include <iostream>

using namespace std;

void doSomething(int students_score[20])
{
	cout << &students_score << endl;
	cout << &students_score[0] << endl;
	cout << &students_score[1] << endl;
	cout << &students_score[2] << endl;
	cout << &students_score[3] << endl;
	cout << &students_score[4] << endl;
	cout << sizeof(students_score) << endl;
}

int main()
{
	const int num_students = 20;

	int student_scores[num_students] = { 1, 2, 3, 4, 5 };

	cout << &student_scores << endl;
	cout << &student_scores[0] << endl;
	cout << &student_scores[1] << endl;
	cout << &student_scores[2] << endl;
	cout << &student_scores[3] << endl;
	cout << &student_scores[4] << endl;
	cout << sizeof(student_scores) << endl;
	cout << endl;

	doSomething(student_scores);
}