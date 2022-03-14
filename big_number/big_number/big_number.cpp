#include <iostream>
#include <string>
using namespace std;

// 정수형으로 계산 시, 담을 수 있는 자료형에 한계가 있기 때문에 이상한 값이 나온다.
// 따라서 문자열로 입력받아서 문자열끼리 더하는 알고리즘을 구현
// a와 b 두 문자열을 입력받고 맨 마지막 수부터 더해가면서 올림값과 결과값을 구하여 계속 더한다.
// a와 b의 자릿수를 맞춰야 하기 때문에 자리수가 작은 쪽에서 0으로 채워줌

int main() {
	string a, b;
	cin >> a >> b;

	// 두 숫자의 자릿수를 비교하여 맞춰준다.
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

	string result; // 결과값
	bool round = false; // 올림수 확인
	int tmp;
	while (a.size() != 0 && b.size() != 0) {
		tmp = round;
		round = false;
		tmp += a.back() - '0'; // 문자열의 맨 마지막 문자를 숫자로 변환
		tmp += b.back() - '0';

		if (tmp / 10) { // 올림수가 있는 경우
			round = true;
			tmp -= 10;
		}

		result.insert(result.begin(), tmp + '0');
		a.pop_back(); // 계산한 숫자는 삭제
		b.pop_back();
	}
	if (round) { result.insert(result.begin(), '1'); } // 마지막에 올림수가 남아있다면 더해준다.
	cout << result << endl;
	return 0;

}