//#include <iostream>
//#include <algorithm>
//
//using namespace std;

/*
// BAEKJOON 3052번 : 나머지 - bool형 배열 사용
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	bool remain[42] = { false, };
	int answer = 0;

	for (int i = 0; i < 10; ++i)
	{
		int num;
		cin >> num;
		remain[num % 42] = true;
	}

	for (int i = 0; i < 42; ++i)
	{
		if (remain[i])
		{
			++answer;
		}
	}

	cout << answer;

	return 0;
}
*/

/*
// BAEKJOON 3052번 : 나머지 - 정돈된 풀이
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int remain[10];
	int answer = 0;

	for (int i = 0; i < 10; ++i)
	{
		cin >> remain[i];
		remain[i] = remain[i] % 42;
	}

	sort(remain, remain + 10);

	for (int i = 0; i < 10; ++i)
	{
		if (i == 0 || remain[i] != remain[i - 1])
			++answer;
	}
	
	cout << answer;

	return 0;
}
*/

/*
// BAEKJOON 3052번 : 나머지 - 기존 풀이
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int remain[10];
	int answer = 0;

	for (int i = 0; i < 10; ++i)
	{
		cin >> remain[i];
		remain[i] = remain[i] % 42;
	}

	sort(remain, remain + 10);

	for (int i = 0; i < 10; ++i)
	{
		if (i == 9 && remain[9] != remain[0])
		{
			++answer;
		}
		else if (remain[i] != remain[i + 1])
		{
			++answer;
		}
		if (remain[0] == remain[9])
		{
			answer = 1;
		}
	}

	cout << answer;

	return 0;
}
*/