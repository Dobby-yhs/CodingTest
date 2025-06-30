//#include <iostream>
//
//using namespace std;
 
/*
// BAKEJOON 2563번 : 색종이
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;


	while(t--)
	{
		int n, m;
		cin >> n >> m;

		long answer = 1;
		int r = 1;

		for (int i = m; i > m - n; i--)
		{
			answer *= i;
			answer /= r;

			r++;
		}

		cout << answer << '\n';
	}
	return 0;
}
*/

/*
// BAKEJOON 2563번 : 색종이 - 잘못된 풀이
long long fac(int x)
{
	long long facX = 1;

	for (int i = 1; i <= x; i++)
	{
		facX *= i;
	}

	return facX;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	long long answer = 1;

	while (t--)
	{
		int n, m;
		cin >> n >> m;

		answer = fac(m) / (fac(m - n) * fac(n));

		cout << answer << '\n';
	}

	return 0;
}
*/