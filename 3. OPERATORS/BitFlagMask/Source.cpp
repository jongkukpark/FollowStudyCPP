#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	//BITFLAG----------------------------------------------------------------
	cout << "BITFLAG" << endl;
	
	bool item1_flag = false;
	bool item2_flag = false;
	bool item3_flag = false;
	bool item4_flag = false;
	// ���� �������� 32���� 32�� �� bool�� �����.. ����!

	// invokeEvent(item1_flag, item2_flag, item3_flag, item4_flag, ...); �̷��� �� �����.

	// ������ 1 ����
	item1_flag = true;

	// ����
	item2_flag = false;

	// ������ 3�� �־�� ���� ��������.
	if (item3_flag == true)
	{

	}

	// ������ 3���� ������ 4�� ����.
	if (item3_flag == true && item4_flag == false)
	{
		item3_flag = false;
		item4_flag = true;
	}

	// ���� ���ô� �ʹ� �����ϴ�.

	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;
	// opt4, 5, 6, 7

	cout << bitset<8>(opt0) << " " << int(opt0) << endl;
	cout << bitset<8>(opt1) << " " << int(opt1) << endl;
	cout << bitset<8>(opt2) << " " << int(opt2) << endl;
	cout << bitset<8>(opt3) << " " << int(opt3) << endl;

	unsigned char items_flag = 0;

	cout << "No item: " << bitset<8>(items_flag)<< endl;
	// item0 get
	items_flag |= opt0;
	cout << "Item0 get: " << bitset<8>(items_flag) << endl;
	// item3 get
	items_flag |= opt3;
	cout << "Item3 get: " << bitset<8>(items_flag) << endl;
	// item3 lost
	items_flag &= ~opt3;
	cout << "Item3 lost: " << bitset<8>(items_flag) << endl;
	// has item1?
	if (items_flag & opt1)
		cout << "Has item1" << endl;
	else
		cout << "Not have item1" << endl;
	// has item0?
	if (items_flag & opt0)
		cout << "Has item0" << endl;
	else
		cout << "Not have item0" << endl;
	// get item 2,3 ?
	items_flag |= (opt2 | opt3);
	cout << "Item2, 3 get: " << bitset<8>(items_flag) << endl;
	// event ������ 2�� �ְ� ������ 1�� ���� ��
	if ((items_flag & opt2) && (items_flag & ~opt1))
	{
		items_flag ^= (opt2 | opt1);
		cout << "has item2, Not have item1 get: " << bitset<8>(items_flag) << endl;
	}

	//��ǻ�ͱ׷��Ƚ� glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//BITMASK----------------------------------------------------------------
	cout << "\nBITMASK" << endl;

	const unsigned int red_mask = 0xFF0000;
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;
	cout << std::bitset<32>(red_mask) << endl;
	cout << std::bitset<32>(green_mask) << endl;
	cout << std::bitset<32>(blue_mask) << endl;

	unsigned int pixel_color = 0xDAA520;
	
	cout << std::bitset<32>(pixel_color) << endl;

	// 3���� �������� �и��� �غ���.
	unsigned char red, green, blue;
	red = (pixel_color & red_mask) >> 16;
	cout << bitset<8>(red) << " " << int(red) << endl;
	green = (pixel_color & green_mask) >> 8;
	cout << bitset<8>(green) << " " << int(green) << endl;
	blue = (pixel_color & blue_mask);
	cout << bitset<8>(blue) << " " << int(blue) << endl;

	return 0;
}