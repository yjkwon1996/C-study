#include <iostream>
#include <string>
using namespace std;

int main() {
	cout.setf(ios_base::fixed); // �Ҽ��� ǥ������� �Ǽ��� ����ϱ� ���� �޼ҵ带 ȣ��. ������ ���� ǥ������� ��µ�(12E.032)

	float fvalue = 1234567890.12345678901234567890;
	double dvalue = 1234567890.12345678901234567890;
	cout << "float�� ���� = " << fvalue << endl;
	cout << "double�� ���� = " << dvalue << endl;

	return 0;
}