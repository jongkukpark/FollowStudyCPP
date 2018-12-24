/*	부동소수점		최소크기	전형적인 크기
	float:			4bytes	4bytes
	double:			8bytes	8bytes
	long double:	8bytes	8, 12, 16 bytes

	부동소수점의 주의할 점에 대해 알아보자.
*/
#include <iostream>
#include <limits>
#include <iomanip> // 입출력조작
#include <cmath> // isnan 사용을 위해

int main() {
	using namespace std;

	float f			(123456789.0f); // 3.14 = 31.4 * 0.1
	double d		(0.1);
	long double ld	(3.141592);
	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

	streamsize c_size = cout.precision();

	cout << d2 << endl;

	cout << setprecision(17) << d2 << endl;

	cout.precision(c_size);

	cout << d << endl;

	cout << setprecision(17) << d << endl;

	cout << setprecision(16) << 1.0 / 3.0 << endl;

	cout << setprecision(9) << f << endl; // 123456792가 나옴, 이진 수 변환이라 숫자가 오류남

	cout << 3.14 << endl;
	cout << 31.4e-1 << endl;
	cout << 31.4e-2 << endl;
	cout << 31.4e1 << endl;
	cout << 31.4e2 << endl;

	cout << sizeof(f) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(ld) << endl;

	cout << numeric_limits<float>::max() << endl;
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<long double>::max() << endl;

	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<long double>::min() << endl;

	cout << numeric_limits<float>::lowest() << endl;
	cout << numeric_limits<double>::lowest() << endl;
	cout << numeric_limits<long double>::lowest() << endl;

	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;

	cout << posinf << " " << isinf(posinf) << endl;
	cout << neginf << " " << isinf(neginf)  << endl;
	cout << nan << " " << isnan(nan) << endl;
	cout << 1.0 << " " << isnan(1.0) << endl;
}