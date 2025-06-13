//#include <iostream>
//#include <vector>     // 1037번
//#include <algorithm>  // 1037번, 11005번
//#include <string>     // 11005번
//
//using namespace std;

/*
// BAEKJOON 11005번 : 진법 변환 2
int main()
{
	int N, B;
	cin >> N >> B;

	string result = "";

	while (N > 0) {
		int remainder = N % B;

		if (remainder < 10)
		{
			result += (char)(remainder + '0');
		}
		else
		{
			result += (char)(remainder - 10 + 'A');
		}

		N /= B;
	}

	if (result.empty()) 
		result = "0";

	reverse(result.begin(), result.end());

	cout << result;

	return 0;
}
*/

/*
// BAEKJOON 2163번 : 초콜릿 자르기
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	cout << n * m - 1;

	return 0;
}
*/

/*
// BAEKJOON 1924번 : 2007년
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int x, y;
	cin >> x >> y;

	int days = 0;

	int day_31[7] = { 1, 3, 5, 7, 8, 10, 12 };
	int day_30[4] = { 4, 6, 9, 11 };
	
	string day[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };

	while (x--)
	{
		if (x == 2)
		{
			days += 28;
			continue;
		}
		for (int i : day_31)
		{
			if (x == i)
				days += 31;
		}
		for (int j : day_30)
		{
			if (x == j)
				days += 30;
		}
	}

	days = days + y - 1;

	days %= 7;

	cout << day[days];

	return 0;
}
*/

/*
// BAEKJOON 1037번 : 약수
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> divisor(n);

	for (int i = 0; i < n; i++)
	{
		cin >> divisor[i];
	}

	if (n == 1)
	{
		cout << divisor[0] * divisor[0];
	}
	else
	{
		sort(divisor.begin(), divisor.end());

		cout << divisor[0] * divisor[n - 1];
	}

	return 0;
}
*/