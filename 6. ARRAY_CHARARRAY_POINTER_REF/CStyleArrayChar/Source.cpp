#include <iostream>

using namespace std;

int main()
{
	char source[] = "Copy this!";
	char dest[50];
	strcpy_s(dest, 50, source);

	//strcat()
	//strcmp()

	strcat(dest, source); // �ڿ� �ٿ��ִ°�

	cout << strcmp(source, dest); // ������ 0 ����, �ٸ��� -1 ����

	cout << source << endl;
	cout << dest << endl;

	//char myString[255]; // null�� �������

	//cin.getline(myString, 255);

	//int ix = 0;

	//while (true)
	//{
	//	if (myString[ix] == '\0') break;

	//	cout << myString[ix] << " " << (int)myString[ix] << endl;
	//	ix++;
	//}

	/*myString[6] = '\0';

	cout << myString << endl;*/
	/*for (int i = 0; i < 7; i++)
	{
		cout << (int)myString[i] << endl;
	}*/

	/*cout << sizeof(myString) << endl;*/


}