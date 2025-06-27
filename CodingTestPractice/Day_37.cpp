//#include <iostream>
//#include <vector>     // 11651번
//#include <algorithm>  // 11651번
//
//using namespace std;

/*
// BAKEJOON 2563번 : 색종이
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	bool paper[100][100] = { false };
	int area = 0;

	while (n--)
	{
		int x, y;
		cin >> x >> y;

		for (int i = x; i < x + 10; i++)
		{
			for (int j = y; j < y + 10; j++)
			{
				if (!paper[i][j])
				{
					paper[i][j] = true;
					area++;
				}
			}
		}
	}

	cout << area;

	return 0;
}
*/

/*
// BAKEJOON 2563번 : 색종이 - 잘못된 풀이
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<pair<int, int>> squares(n);

	int blackArea = 0;
	int area = 100 * n;

	for (int i = 0; i < n; i ++)
	{
		cin >> squares[i].first >> squares[i].second;
	}

	for (int i = 0; i < squares.size() - 1; i++)
	{
		for (int j = i + 1; j < squares.size(); j++)
		{
			int a = squares[i].first; int b = squares[i].second;
			int x = squares[j].first; int y = squares[j].second;

			if (a < x && x < a + 10)
			{
				if (b < y + 10 && y + 10 < b + 10)
				{
					blackArea += (a + 10 - x) * (y + 10 - b);
				}
				else if (b < y && y < b + 10)
				{
					blackArea += (x - a + 10) * (b + 10 - y);
				}
				else if (y == b)
				{
					blackArea += (a + 10 - x) * 10;
				}
			}
			else if (a < x + 10 && x + 10 < a + 10)
			{
				if (b < y + 10 && y + 10 < b + 10)
				{
					blackArea += (x + 10 - a) * (y + 10 - b);
				}
				else if (b < y && y < b + 10)
				{
					blackArea += (x + 10 - a) * (b + 10 - y);
				}
				else if (y == b)
				{
					blackArea += (x + 10 - a) * 10;
				}
			}
			else if (a == x)
			{
				if (b < y + 10 && y + 10 < b + 10)
				{
					blackArea += 10 * (y + 10 - b);
				}
				else if (b < y && y < b + 10)
				{
					blackArea += 10 * (b + 10 - y);
				}
				else if (y == b)
				{
					blackArea += 10 * 10;
				}
			}
		}
	}

	cout << area - blackArea;

	return 0;
}
*/

/*
// BAKEJOON 11651번 : 좌표 정렬하기 2
bool compare(pair<int, int> a, pair<int, int> b)
{
	if (a.second == b.second)
		return a.first < b.first;

	return a.second < b.second;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<pair<int, int>> coordinates(n);

	for (int i = 0; i < coordinates.size(); i++)
	{
		cin >> coordinates[i].first >> coordinates[i].second;
	}

	sort(coordinates.begin(), coordinates.end(), compare);

	for (const auto& p : coordinates)
	{
		cout << p.first << ' ' << p.second << '\n';
	}

	return 0;
}
*/