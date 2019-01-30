#include <iostream>
#include <string>

using namespace std;

//void printPerson(double height, float weight, int age, string name)
//{
// // 복잡하다..
//}

struct Person
{
	double height = 169.0; // member
	float weight = 70;
	int age = 19;
	string name = "JD";

	void print()
	{
		cout << height << " " << weight << " " <<
			age << " " << name << endl;
	}

}; // . member selection operator

struct Family
{
	Person me;
	Person mom;
	Person dad;
};

struct Employee // 2 + (2) + 4 + 8 = 16Bytes, padding
{
	short id; // 2Bytes
	int age; // 4Bytes
	double wage; // 8Bytes
};

//void printPerson(Person ps)
//{
//	cout << ps.height << " " << ps.weight << " " <<
//		ps.age << " " << ps.name << endl;
//}

Person getMe()
{
	Person me{ 170.0, 60, 20, "ZUM ZUM" };

	return me;
}

int main()
{
	Person me{ 170.0, 60, 20, "Jack Jack" };
	Person me2(getMe());
	Person me3;
	Employee emp1;

	// me2 = me;

	// printPerson(me);
	me.print();
	me2.print();
	me3.print();
	cout << sizeof(Employee) << endl; // 14 나와야하는데 16 나옴.

	return 0;
}