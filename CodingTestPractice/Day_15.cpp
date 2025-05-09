#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
// BAEKJOON 5597번 : 과제 안 내신 분..? - 불리언형 배열 사용
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	bool arr[30] = { false, };
	int num;

	for (int i = 0; i < 28; i++)
	{
		cin >> num;
		arr[num - 1] = 1;
	}

	for (int i = 1; i <= 30; i++)
	{
		if (!arr[i - 1])  // arr[i - 1]이 0이라면,
		{
			cout << i << "\n";
		}
	}

	return 0;
}
*/

/*
// BAEKJOON 5597번 : 과제 안 내신 분..? - 정수형 배열 사용
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int arr[30] = { 0, };
	int num;

	for (int i = 0; i < 28; i++)
	{
		cin >> num;
		arr[num - 1] = 1;
	}

	for (int i = 1; i <= 30; i++)
	{
		if (!arr[i - 1])  // arr[i - 1]이 0이라면,
		{
			cout << i << "\n";
		}
	}

	return 0;
}
*/

/*
// BAEKJOON 5597번 : 과제 안 내신 분..?
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> vec;
	int n1 = 0, n2 = 0;

	for (int i = 0; i < 28; ++i)
	{
		int x;
		cin >> x;
		vec.push_back(x);
	}

	sort(vec.begin(), vec.end());

	for (int i = 1; i <= 30; ++i)
	{
		if (vec[i - 1] != i)
		{
			if (n1 == 0)
			{
				n1 = i;
				vec.push_back(i);
				sort(vec.begin(), vec.end());
			}
			else
			{
				n2 = i;
				break;
			}
		}
	}

	cout << n1 << "\n" << n2;

	return 0;
}
*/

/*
// BAEKJOON 5086번 : 배수와 약수
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int x, y;

	while (1)
	{
		cin >> x >> y;
		
		if (x == 0 && y == 0)
			return 0;

		if (y % x == 0)
			cout << "factor\n";
		else if (x % y == 0)
			cout << "multiple\n";
		else
			cout << "neither\n";

	}
}
*/

/*
// BAEKJOON 5073번 : 삼각형과 세 변
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int arr[3];

	while (1)
	{
		cin >> arr[0] >> arr[1] >> arr[2];

		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
			return 0;

		sort(arr, arr + 3);

		if (arr[2] < arr[0] + arr[1])
		{
			if (arr[0] == arr[1] && arr[1] == arr[2])
			{
				cout << "Equilateral\n";
			}
			else
			{
				if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2])
				{
					cout << "Isosceles\n";
				}
				else if (arr[0] != arr[1] && arr[1] != arr[2] && arr[0] != arr[2])
				{
					cout << "Scalene\n";
				}
			}
		}
		else
		{
			cout << "Invalid\n";
		}
	}
}
*/

/*
// BAEKJOON 5063번 : TGN
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	int r, e, c;

	cin >> N;

	while (N--)
	{
		cin >> r >> e >> c;

		if (r < e - c)
			cout << "advertise\n";
		else if (r == e - c)
			cout << "does not matter\n";
		else
			cout << "do not advertise\n";
	}

	return 0;
}
*/