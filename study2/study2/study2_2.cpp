#include <iostream>
using namespace std;

int main3() {
	const int MONTHS = 12;
	double m_salary, y_salary;

	cout << "월급을 입력하시오 : ";
	cin >> m_salary;

	y_salary = 12 * m_salary;
	cout << "연봉은 " << y_salary << "입니다." << endl;



	char c;
	cout << "문자를 입력하시오: ";
	cin >> c;

	cout << "입력된 문자는 " << c << "입니다." << endl;

	int code = c;
	
	cout << c << "의 아스키 코드 = " << code << endl;
	
	c = c + 1;
	code = c;
	cout << c << "의 아스키 코드 = " << code << endl;


	return 0;
}