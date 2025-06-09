//#include <iostream>
//#include <vector>
//
//using namespace std;

/*
// BAEKJOON 10798번 : 세로읽기 - 보다 효율적인 풀이
int main()
{
	vector<string> words(5);

	for (int i = 0; i < 5; i++)
	{
		cin >> words[i];
	}

	for (int col = 0; col < 15; col++)
	{
		for (int row = 0; row < 5; row++)
		{
			if (col < words[row].size())
			{
				cout << words[row][col];
			}
		}
	}

	return 0;
}
*/

/*
// BAEKJOON 10798번 : 세로읽기
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<string> answer(15);

	string words;

	for (int i = 0; i < 5; i++)
	{
		cin >> words;
		
		for (int j = 0; j < words.size(); j++)
		{
			answer[j].push_back(words[j]);
		}
	}

	for (int i = 0; i < answer.size(); i++)
	{
		cout << answer[i];
	}

	return 0;
}
*/

/*
// BAEKJOON 11050번 : 이항 계수 1 - 반복문 활용
int factorial(int n)
{
	int result = 1;

	for (int i = 2; i <= n; i++)
	{
		result *= i;
	}

	return result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;

	cin >> n >> k;

	cout << factorial(n) / (factorial(k) * factorial(n - k));

	return 0;
}
*/

/*
// BAEKJOON 11050번 : 이항 계수 1 - 재귀 함수 활용
int factorial(int n)
{
	if (n == 0)
		return 1;

	return n * factorial(n - 1);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;

	cin >> n >> k;

	cout << factorial(n) / (factorial(k) * factorial(n - k));

	return 0;
}
*/

/*
// BAEKJOON 11050번 : 이항 계수 1
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;

	cin >> n >> k;

	int x = 1;

	for (int i = n; i > k; i--)
	{
		x *= i;
	}

	for (int j = (n - k); j >= 1; j--)
	{
		x /= j;
	}

	cout << x;

	return 0;
}
*/