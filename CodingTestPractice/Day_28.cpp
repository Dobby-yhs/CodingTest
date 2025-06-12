//#include <iostream>
//#include <algorithm>  // 1259번
//#include <vector>     // 수 정렬하기 3 - 메모리 초과
//
//using namespace std;

/*
// BAEKJOON 10989번 : 수 정렬하기 3
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int count[10001] = { 0 };
	int n;
	cin >> n;

	int num;
	for (int i = 0; i < n; i++) {
		cin >> num;
		count[num]++;
	}

	for (int i = 1; i <= 10000; i++) {
		while (count[i]--) {
			cout << i << '\n';
		}
	}

	return 0;
}
*/

/*
// BAEKJOON 10989번 : 수 정렬하기 3 - 메모리 초과
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\n";
	}

	return 0;
}
*/

/*
// BAEKJOON 2748번 : 피보나치 수 2 - 재귀 함수 (시간 초과)
long long Fibonacci(int x)
{
	if (x == 0) return 0;
	if (x == 1) return 1;

	long long fn_1 = 0, fn = 1;
	long long fx = 0;

	for (int i = 2; i <= x; i++)
	{
		fx = fn + fn_1;
		fn_1 = fn;
		fn = fx;
	}

	return fx;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	cout << Fibonacci(n);

	return 0;
}
*/

/*
// BAEKJOON 2748번 : 피보나치 수 2 - 재귀 함수 (시간 초과)
int Fibonacci(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;

	return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	cout << Fibonacci(n);

	return 0;
}
*/

/*
// BAEKJOON 1259번 : 팰린드롬수
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string n = "";

	while (true)
	{
		cin >> n;

		if (n == "0")
			return 0;

		string prevN = n;
		reverse(n.begin(), n.end());

		if (prevN == n)
		{
			cout << "yes\n";
		}
		else
		{
			cout << "no\n";
		}
	}

	return 0;
}
*/

/*
// BAKEJOON 1934번 : 최소공배수
int gcd(int x, int y)
{
	while (y != 0)
	{
		int r = x % y;
		x = y;
		y = r;
	}

	return x;
}

int lcm(int x, int y)
{
	return x * y / gcd(x, y);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int a, b;
		cin >> a >> b;

		cout << lcm(a, b) << "\n";
	}

	return 0;
}
*/