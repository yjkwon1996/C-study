#include <iostream>
using namespace std;

int main3() {
	const int MONTHS = 12;
	double m_salary, y_salary;

	cout << "������ �Է��Ͻÿ� : ";
	cin >> m_salary;

	y_salary = 12 * m_salary;
	cout << "������ " << y_salary << "�Դϴ�." << endl;



	char c;
	cout << "���ڸ� �Է��Ͻÿ�: ";
	cin >> c;

	cout << "�Էµ� ���ڴ� " << c << "�Դϴ�." << endl;

	int code = c;
	
	cout << c << "�� �ƽ�Ű �ڵ� = " << code << endl;
	
	c = c + 1;
	code = c;
	cout << c << "�� �ƽ�Ű �ڵ� = " << code << endl;


	return 0;
}