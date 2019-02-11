#include <iostream>

using namespace std;

struct Rectangle
{
	int length;
	int width;
};

enum StudentName
{
	JACKJACK,
	DASH,
	VIOLET
};

int main()
{
	const int num_students = 20;

	int students_scores[num_students];

	//int my_array[5] = { 1, 2, 3, 4, 5 };

	//for (int i = 0; i < 5; i++)
	//{
	//	cout << my_array[i] << endl;
	//}

	//cout << my_array[JACKJACK] << endl;
	

	/*cout << sizeof(Rectangle) << endl;

	Rectangle rect_arr[10];

	cout << sizeof(rect_arr) << endl;*/

	//int one_student_score;
	//int student_scores[5];

	///*cout << sizeof(one_student_score) << endl;
	//cout << sizeof(student_scores) << endl;*/

	//one_student_score = 100;
	//student_scores[0] = 100;
	//student_scores[1] = 80;
	//student_scores[2] = 90;
	//student_scores[3] = 50;
	//student_scores[4] = 0;
	////student_scores[5] = 30; // 배열을 넘어감

	//cout << student_scores[0] << endl;
	//cout << student_scores[1] << endl;
	//cout << student_scores[2] << endl;
	//cout << student_scores[3] << endl;
	//cout << student_scores[4] << endl;
	///*cout << student_scores[5] << endl;*/

	//cout << (student_scores[0] + student_scores[1]) / 2.0 << endl;

	return 0;
}