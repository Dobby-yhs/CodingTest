//#include <iostream>
//#include <cmath>      // 2745번
//#include <vector>     // 25305번
//#include <algorithm>  // 25305번
//
//using namespace std;

/*
// BAEKJOON 25305번 : 커트라인 - 내림차순 정렬
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, k;
	vector<int> range;

	cin >> N >> k;

	while (N--)
	{
		int score;
		cin >> score;
		range.push_back(score);
	}

	sort(range.begin(), range.end(), greater<int>());

	cout << range[k - 1];

	return 0;
}
*/

/*
// BAEKJOON 25305번 : 커트라인 - 오름차순 정렬
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, k;
	vector<int> range;
	
	cin >> N >> k;

	while (N--)
	{
		int score;
		cin >> score;
		range.push_back(score);
	}

	sort(range.begin(), range.end());

	cout << range[range.size() - k];

	return 0;
}
*/

/*
// BAEKJOON 2745번 : 진법 변환
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string N;
	int B;

	int answer = 0;
	int j = 0;

	cin >> N >> B;

	for (int i = N.size() - 1; i >= 0; i--)
	{
		if (N[i] <= '9')
			answer += (N[i] - '0') * static_cast<int>(pow(B, j));
		else
			answer += (N[i] - 55) * static_cast<int>(pow(B, j));

		j++;
	}

	cout << answer;

	return 0;
}
*/