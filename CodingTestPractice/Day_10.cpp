#include <iostream>
#include <algorithm>

using namespace std;

/*
// BAEKJOON 2446¹ø : º° Âï±â - 9
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = n; i >= 1; --i)
	{
		for (int j = 0; j < n - i; ++j)
		{
			cout << " ";
		}
		for (int j = 0; j < 2 * i - 1; ++j)
		{
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = 2; i <= n; ++i) 
	{
		for (int j = 0; j < n - i; ++j) 
		{
			cout << " ";
		}
		for (int j = 0; j < 2 * i - 1; ++j)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}
*/

/*
// BAEKJOON 2445¹ø : º° Âï±â - 8
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i ; ++j)
		{
			cout << "*";
		}
		for (int j = 1; j <= 2 * (n - i); ++j)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; ++j)
		{
			cout << "*";
		}

		cout << "\n";
	}

	for (int i = n - 1; i >= 1; --i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout << "*";
		}
		for (int j = 1; j <= 2 * (n - i); ++j)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; ++j)
		{
			cout << "*";
		}

		cout << "\n";
	}

	return 0;
}
*/

/*
// BAEKJOON 2444¹ø : º° Âï±â - 7
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n - i; ++j) {
			cout << " ";
		}

		for (int j = 1; j <= 2 * i - 1; ++j) {
			cout << "*";
		}

		cout << endl;
	}

	for (int i = n - 1; i >= 1; --i)
	{
		for (int j = 0; j < n - i; ++j)
		{
			cout << " ";
		}
		for (int j = 0; j < 2 * i - 1; ++j)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
*/

/*
// BAEKJOON 2443¹ø : º° Âï±â - 6
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n; 

	for (int i = n; i >= 1; --i)
	{
		for (int j = 0; j < n - i; ++j) 
		{
			cout << " ";
		}
		for (int j = 0; j < 2 * i - 1; ++j)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
*/

/*
// BAEKJOON 2442¹ø : º° Âï±â - 5
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n; 

	for (int i = 1; i <= n; ++i) 
	{
		for (int j = 1; j <= n - i; ++j) {
			cout << " ";
		}
		
		for (int j = 1; j <= 2 * i - 1; ++j) {
			cout << "*";
		}
		
		cout << endl;
	}
}
*/

/*
// BAEKJOON 15552¹ø : ºü¸¥ A+B
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int caseNum;
	int n, m;

	cin >> caseNum;

	while (caseNum--)
	{
		cin >> n >> m;

		cout << n + m << "\n";
	}

	return 0;
}
*/

/*
// BAEKJOON 15439¹ø : º£¶óÀÇ ÆÐ¼Ç
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;

	cin >> N;

	cout << N * (N - 1);

	return 0;
}
*/

/*
// BAEKJOON 11945¹ø : ¶ß°Å¿î ºØ¾î»§
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	string s1;

	cin >> n >> m;
	
	for (int i = 0; i < n; ++i)
	{
		// cin >> s1;
		for (int j = 0; j < m; ++j)
		{
			char ch;
			cin >> ch;

			s1 += ch;
		}

		reverse(s1.begin(), s1.end());
		cout << s1 << "\n";

		s1 = "";
	}

	return 0;
}
*/