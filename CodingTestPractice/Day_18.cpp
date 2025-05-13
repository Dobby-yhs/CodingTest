//#include <iostream>
//#include <algorithm>  // BAEKJOON 2908번, 2750번, (2798번)
//#include <sstream>    // BAEKJOON 2908번
//#include <vector>     // BAEKJOON 2750번, 2798번
//
//using namespace std;

/*
// BAEKJOON 2798번 : 블랙잭 - 올바른 코드
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int cardNum, baseValue;
	int maxValue = 0;

	cin >> cardNum >> baseValue;


	vector<int> cards(cardNum);

	for (int i = 0; i < cardNum; i++)
	{
		cin >> cards[i];
	}

	for (int i = 0; i < cardNum - 2; i++)
	{
		for (int j = i + 1; j < cardNum - 1; j++)
		{
			for (int k = j + 1; k < cardNum; k++)
			{
				int currentValue = cards[i] + cards[j] + cards[k];
				
				if (currentValue <= baseValue)
					maxValue = max(maxValue, currentValue);
			}
		}
	}

	cout << maxValue;

	return 0;
}
*/

/*
// BAEKJOON 2798번 : 블랙잭 - 정답이지만, 잘못된 코드
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int cardNum, baseValue;
	int maxValue = 0;
	vector<int> cards;

	cin >> cardNum >> baseValue;

	while (cardNum--)
	{
		int x;
		cin >> x;
		cards.push_back(x);
	}

	sort(cards.begin(), cards.end());

	for (int i = cards.size() - 1; i >= 0; i--)
	{
		for (int j = 0; j < i - 1; j++)
		{
			for (int k = j + 1; k <= i - 1; k++)
			{
				int value = cards[i] + cards[j] + cards[k];
				if (value <= baseValue && value > maxValue)
				{
					maxValue = value;
				}
			}
		}
	}

	cout << maxValue;

	return 0;
}
*/

/*
// BAEKJOON 2750번 : 수 정렬하기
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int caseNum = 0;
	vector<int> sortedVec;

	cin >> caseNum;

	while (caseNum--)
	{
		int num;
		cin >> num;

		sortedVec.push_back(num);
	}

	sort(sortedVec.begin(), sortedVec.end());

	for (int i = 0; i < sortedVec.size(); i++)
	{
		cout << sortedVec[i] << "\n";
	}

	return 0;
}
*/

/*
// BAEKJOON 1978번 : 소수 찾기
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int caseNum = 0;
	int answer = 0;

	cin >> caseNum;

	while (caseNum--)
	{
		int num;
		int find = 0;

		cin >> num;

		for (int i = 1; i <= num; i++)
		{
			if (num % i == 0)
				find++;
		}

		if (find == 2)
			answer++;
	}

	cout << answer;

	return 0;
}
*/

/*
// BAEKJOON 2908번 : 상수 - stoi 활용
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string x, y;
	int rx, ry;

	cin >> x >> y;

	reverse(x.begin(), x.end());
	reverse(y.begin(), y.end());

	rx = stoi(x);
	ry = stoi(y);

	cout << (rx > ry ? x : y);

	return 0;
}
*/

/*
// BAEKJOON 2908번 : 상수
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string x, y;
	int rx, ry;

	cin >> x >> y;
	
	reverse(x.begin(), x.end());
	stringstream ss_x(x);

	reverse(y.begin(), y.end());
	stringstream ss_y(y);

	ss_x >> rx;
	ss_y >> ry;

	if (rx > ry)
		cout << rx;
	else
		cout << ry;


	return 0;
}
*/

/*
// BAEKJOON 8958번 : OX퀴즈
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int caseNum = 0;
	int score = 0;
	int num = 0;


	cin >> caseNum;

	while (caseNum--)
	{
		string str;

		cin >> str;

		for (int i = 0; i < str.length(); ++i)
		{
			if (str[i] == 'O')
			{
				num++;
				score += num;
			}
			else
			{
				num = 0;
			}
		}

		cout << score << "\n";
		score = 0;
		num = 0;
	}

	return 0;
}
*/