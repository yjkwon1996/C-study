#include <iostream>
#include <string>
using namespace std;

int main() {
	cout.setf(ios_base::fixed); // 소수점 표기법으로 실수를 출력하기 위해 메소드를 호출. 없으면 지수 표기법으로 출력됨(12E.032)

	float fvalue = 1234567890.12345678901234567890;
	double dvalue = 1234567890.12345678901234567890;
	cout << "float형 변수 = " << fvalue << endl;
	cout << "double형 변수 = " << dvalue << endl;

	return 0;
}