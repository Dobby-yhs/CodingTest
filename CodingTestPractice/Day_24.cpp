/*
#include <iostream>
using namespace std;

// BAEKJOON 2609번 : 최대공약수와 최소공배수
int gcd(int a, int b)
{
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}

	return a;
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	cout << gcd(a, b) << '\n';
	cout << lcm(a, b) << '\n';

	return 0;
}
*/