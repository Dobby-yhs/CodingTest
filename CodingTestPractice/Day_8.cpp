#include <iostream>
using namespace std;

/*
// BAEKJOON 2845번  : 파티가 끝나고 난 뒤
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int L;
	int P;
	int arr[5];

	cin >> L >> P;

	for (int i = 0; i < 5; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 5; ++i)
	{
		int num = L * P;

		cout << arr[i] - num << " ";
	}

	return 0;
}
*/

/*
// BAEKJOON 2440번 : 별 찍기 - 3
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int num;

	cin >> num;

	for (int i = num; i > 0; --i)
	{
		for (int j = 0; j < i; ++j)
		{
			cout << "*";
		}

		cout << "\n";
	}

	return 0;
}
*/


/*
// BAEKJOON 2439번 : 별 찍기 - 2
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int num;

	cin >> num;
	char space = ' ';

	for (int i = 1; i <= num; ++i)
	{
		int j = num - i;
		while (j--)
		{
			cout << space;
		}
		
		for (int k = 1; k <= i; ++k)
		{
			cout << "*";
		}
		
		cout << "\n";
	}

	return 0;
}
*/