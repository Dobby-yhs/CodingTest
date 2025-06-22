//#include <iostream>
//#include <vector>     // 11650번
//#include <algorithm>  // 11650번
//#include <utility>    // 1193번
//
//using namespace std;

/*
// BAKEJOON 1193번 : 분수찾기 - int line 활용
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int x;
	cin >> x;

	int line = 1;

	while (x > line)
	{
		x -= line;
		line++;
	}

	int numerator, denominator;

	if (line % 2 == 0)
	{
		numerator = x;
		denominator = line - x + 1;
	}
	else
	{
		numerator = line - x + 1;
		denominator = x;
	}

	cout << numerator << "/" << denominator;

	return 0;
}
*/

/*
// BAKEJOON 1193번 : 분수찾기 - 리팩토링된 코드
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int x;
	cin >> x;

	bool isLineLeft = false;

	int i;

	for (i = 1; x - i > 0; i++)
	{
		isLineLeft = !isLineLeft;
		x -= i;
	}

	pair<int, int> fraction;

	if (isLineLeft)
		fraction = make_pair(x, i - x + 1);
	else
		fraction = make_pair(i - x + 1, x);

	cout << fraction.first << "/" << fraction.second;

	return 0;
}
*/

/*
// BAKEJOON 1193번 : 분수찾기 - 비효율적 풀이
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int x;
	cin >> x;

	if (x == 1)
	{
		cout << "1/1";
		return 0;
	}

	bool isLineLeft = false;

	int i;

	for (i = 1; x - i > 0; i++)
	{
		isLineLeft = !isLineLeft;
		x -= i;
	}

	pair<int, int> fraction;

	if (isLineLeft)
	{
		for (int j = 1; j <= x; j++, i--)
		{
			fraction = make_pair(j, i);
		}
	}
	else
	{
		int denominator = 1;

		for (int j = 0; j < x; j++, i--, denominator++)
		{
			fraction = make_pair(i, denominator);
		}
	}

	cout << fraction.first << "/" << fraction.second;

	return 0;
}
*/

/*
// BAKEJOON 11650번 : 좌표 정렬하기 - struct 사용
struct Point
{
	int x, y;
};

bool compare(const Point& a, const Point& b)
{
	if (a.x == b.x)
		return a.y < b.y;

	return a.x < b.x;
}

int main()
{
	int n;
	cin >> n;

	vector<Point> coordinate(n);

	for (int i = 0; i < n; i++)
	{
		cin >> coordinate[i].x >> coordinate[i].y;
	}

	sort(coordinate.begin(), coordinate.end(), compare);

	for (const auto& p : coordinate)
	{
		cout << p.x << " " << p.y << '\n';
	}

	return 0;
}
*/

/*
// BAKEJOON 11650번 : 좌표 정렬하기 - pair 사용
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<pair<int, int>> coordinate(n);

	for (int i = 0; i < n; i++)
	{
		cin >> coordinate[i].first >> coordinate[i].second;
	}

	sort(coordinate.begin(), coordinate.end());

	for (const auto& p : coordinate)
	{
		cout << p.first << " " << p.second << '\n';
	}

	return 0;
}
*/

/*
// BAKEJOON 11650번 : 좌표 정렬하기 - 미숙한 pair 사용
bool compare(pair<int, int> before, pair<int, int> after)
{
	if (before.first != after.first)
		return before.first < after.first;

	return before.second < after.second;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<pair<int, int>> coordinate(n);

	for (int i = 0; i < n; i++)
	{
		pair<int, int> p;
		cin >> p.first >> p.second;
		
		coordinate[i] = p;
	}

	sort(coordinate.begin(), coordinate.end(), compare);

	for (int j = 0; j < n; j++)
	{
		cout << coordinate[j].first << " " << coordinate[j].second << '\n';
	}

	return 0;
}
*/