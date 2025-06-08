//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;

/*
// BAEKJOON 2309번: 일곱 난쟁이 - 효율적 풀이
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> height(9);
	int sum = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> height[i];
		sum += height[i];
	}

	sort(height.begin(), height.end());

	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (sum - height[i] - height[j] == 100)
			{
				for (int k = 0; k < 9; k++)
				{
					if (k != i && k != j)
						cout << height[k] << '\n';
				}
				return 0;
			}
		}
	}

	return 0;
}
*/

/*
// BAEKJOON 2309번: 일곱 난쟁이 - 비효율적 풀이
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> height(9);
	
	for (int i = 0; i < 9; i++)
	{
		cin >> height[i];
	}

	sort(height.begin(), height.end());

	int n = 8;
	int m = 7;

	while (true)
	{
		int sum = 0;
		vector<int> seven;

		for (int i = 0; i < 9; i++)
		{
			if (i != n && i != m)
			{
				sum += height[i];
				seven.push_back(height[i]);
			}
		}

		if (sum == 100)
		{
			for (int i = 0; i < 7; i++)
			{
				cout << seven[i] << "\n";
			}
			break;
		}

		m--;
		if (m < 0)
		{
			n--;
			m = n - 1;
		}
	}

	return 0;
}
*/

/*
// BAEKJOON 2775번 : 부녀회장이 될테야
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;

	int k, n;
	vector<int> floors;

	cin >> t;

	while (t--)
	{
		cin >> k >> n;

		for (int i = 1; i <= n; i++)
		{
			floors.push_back(i);
		}

		for (int i = 1; i <= k; i++)
		{
			for (int j = 1; j < n; j++)
			{
				floors[j] += floors[j - 1];
			}
		}

		cout << floors[n - 1] << "\n";
		
		floors.clear();
	}

	return 0;
}
*/