/*
// PCCE 기출 문제 7번 / 버스
#include <string>
#include <vector>

using namespace std;

int func1(int num) {
    if (0 > num) {
        return 0;
    }
    else {
        return num;
    }
}

int func2(int num) {
    if (num > 0) {
        return 0;
    }
    else {
        return num;
    }
}

int func3(vector<string> station) {
    int num = 0;
    for (int i = 0; i < station.size(); i++) {
        if (station[i] == "Off") {
            num += 1;
        }
    }
    return num;
}

int func4(vector<string> station) {
    int num = 0;
    for (int i = 0; i < station.size(); i++) {
        if (station[i] == "On") {
            num += 1;
        }
    }
    return num;
}

int solution(int seat, vector<vector<string>> passengers) {
    int num_passenger = 0;
    for (int i = 0; i < passengers.size(); i++) {
        num_passenger += func4(passengers[i]);
        num_passenger -= func3(passengers[i]);
    }
    int answer = func1(seat - num_passenger);
    return answer;
}

// 정적 배열
//   정적 배열의 크기를 구하기 위해서는 sizeof 연산자를 활용한다.
//   행은 arr[n], 열은 arr[n][n]으로써 알 수 있다.
// 동적 배열
//   동적 배열의 크기를 구하기 위해서는 vector의 크기를 구하는 연산자인 size 연산자를 활용한다.
//   행은 arr, 열은 arr[n]으로써 알고 있다.
//     arr[n] : n번째 행의 열
*/

/*
// PCCE 기출 문제 5번 / 심폐소생술
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> cpr) {
	vector<int> answer = { 0, 0, 0, 0, 0 };
	vector<string> basic_order = { "check", "call", "pressure", "respiration", "repeat" };

	// 벡터의 사이즈에 있어서, 형 변환에 대한 고려를 위해 아래와 같이 수정하는 것이 더 좋은 접근
	// static_cast<int>(cpr.size());
	for (int i = 0; i <cpr.size(); i++) {
		for (int j = 0; j <	basic_order.size(); j++) {
			if (cpr[i] == basic_order[j]) {
				answer[i] = j;
				break;
			}
		}
	}

	return answer;
}
*/

/*
// PCCE 기출문제 3번 / 수 나누기
#include <iostream>

using namespace std;

int main(void) {
	int number;
	cin >> number;

	int answer = 0;

	// for (int i = 0; i < 1; i++) // 올바른 접근
	while (number)
	{
		answer += number % 100;

		number /= 100;
		// if (number != 0) { --i; cout << i << endl; } // 잘못된 접근
	}

	return 0;
}
*/