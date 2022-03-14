#include <iostream>
#include <string>
using namespace std;

// ���������� ��� ��, ���� �� �ִ� �ڷ����� �Ѱ谡 �ֱ� ������ �̻��� ���� ���´�.
// ���� ���ڿ��� �Է¹޾Ƽ� ���ڿ����� ���ϴ� �˰����� ����
// a�� b �� ���ڿ��� �Է¹ް� �� ������ ������ ���ذ��鼭 �ø����� ������� ���Ͽ� ��� ���Ѵ�.
// a�� b�� �ڸ����� ����� �ϱ� ������ �ڸ����� ���� �ʿ��� 0���� ä����

int main() {
	string a, b;
	cin >> a >> b;

	// �� ������ �ڸ����� ���Ͽ� �����ش�.
	if (a.size() > b.size()) {
		string tmp;
		for (int i = 0; i < a.size() - b.size(); i++) { tmp += '0'; }
		b = tmp + b;
	}
	else {
		string tmp;
		for (int i = 0; i < b.size() - a.size(); i++) { tmp += '0'; }
		a = tmp + a;
	}

	string result; // �����
	bool round = false; // �ø��� Ȯ��
	int tmp;
	while (a.size() != 0 && b.size() != 0) {
		tmp = round;
		round = false;
		tmp += a.back() - '0'; // ���ڿ��� �� ������ ���ڸ� ���ڷ� ��ȯ
		tmp += b.back() - '0';

		if (tmp / 10) { // �ø����� �ִ� ���
			round = true;
			tmp -= 10;
		}

		result.insert(result.begin(), tmp + '0');
		a.pop_back(); // ����� ���ڴ� ����
		b.pop_back();
	}
	if (round) { result.insert(result.begin(), '1'); } // �������� �ø����� �����ִٸ� �����ش�.
	cout << result << endl;
	return 0;

}