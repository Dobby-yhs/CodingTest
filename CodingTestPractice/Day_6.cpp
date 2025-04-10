#include <iostream>
#include <cmath> // BAEKJOON 9498번 : 시험 성적
using namespace std;

/*
// BAEKJOON 9498번 : 시험 성적
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int score;

	cin >> score;

	score = (int)(trunc(score / 10.0) * 10);

	switch (score)
	{
		case 100:
			cout << "A";
			break;
		case 90:
			cout << "A";
			break;
		case 80:
			cout << "B";
			break;
		case 70:
			cout << "C";
			break;
		case 60:
			cout << "D";
			break;
		default:
			cout << "F";
			break;
	}

	return 0;
}
*/

/*
// BAEKJOON 9086번 : 문자열
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	string str;

	while(n--)
	{
		cin >> str;
		cout << str[0] << str[str.length() - 1] << "\n";

	}

	return 0;
}
*/

/*
// BAEKJOON 8393번 : 합
int main()
{
	int n;
	cin >> n;

	long long answer = 0;

	for (int i = 1; i <= n; ++i)
	{
		answer += i;
	}

	cout << answer;

	return 0;
}
*/