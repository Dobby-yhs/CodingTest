/*
// BAEKJOON 2475번 : 검증수
#include <iostream>

using namespace std;

int main()
{

	int num, square = 0;
	int answer = 0;

	for (int i = 0; i < 5; ++i)
	{
		cin >> num;

		square += num * num;
	}
	
	answer = square % 10;

	cout << answer;

	return 0;
}
*/

/*
// BAEKJOON 2438번 : 별 찍기-1
#include <iostream>

using namespace std;

int main()
{
	int N;

	cin >> N;

	for (int i = 1; i <= N; ++i)
	{
		for (int k = 1; k <= i; ++k)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
*/

/*
// BAEKJOON 2420번 : 사파리 월드
#include <iostream>

using namespace std;

int main()
{
	long long n, m;

	cin >> n >> m;

	cout << abs(n - m);

	return 0;
}
*/