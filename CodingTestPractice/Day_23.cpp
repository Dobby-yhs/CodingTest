//#include <iostream>
//#include <vector>  // 1546번, 1157번, 4344번
//#include <string>  // 1157번
//#include <cmath>   // 2869번
//
//using namespace std;

/*
// BAEKJOON 2869번 : 달팽이는 올라가고 싶다 - 올림을 정수 나눗셈으로 처리
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int A, B, V;

	cin >> A >> B >> V;

	int day = (V - B - 1) / (A - B) + 1;
	cout << day;

	return 0;
}
*/

/*
// BAEKJOON 2869번 : 달팽이는 올라가고 싶다 - ceil() 함수 활용
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int A, B, V;

	cin >> A >> B >> V;

	int day = ceil((double)(V - A) / (A - B)) + 1;
	
	cout << day;
	
	return 0;
}
*/

/*
// BAEKJOON 2869번 : 달팽이는 올라가고 싶다 - 나머지에 대한 예외처리
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int A, B, V;

	cin >> A >> B >> V;

	int day = (V - A) / (A - B) + 1;
	if ((V - A) % (A - B) != 0)
		day++;
		
	cout << day;

	return 0;
}
*/

/*
// BAEKJOON 4344번 : 평균은 넘겠지
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int C;
	cin >> C;

	cout.precision(3);
	cout << fixed;

	while (C--)
	{
		int N;
		cin >> N;
		
		vector<int> scores(N);
		int sum = 0;
		double above = 0;

		for (int i = 0; i < N; i++)
		{
			cin >> scores[i];
			sum += scores[i];
		}

		for (int i = 0; i < N; i++)
		{
			if (scores[i] > sum / N)
			{
				above += 1;
			}
		}

		cout << above / N * 100 << "%\n";
	}

	return 0;
}
*/

/*
// BAEKJOON 1110번 : 더하기 사이클
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int ln = N / 10;
	int rn = N % 10;
	int cn = ln + rn;

	int cycle = 0;

	do
	{
		cn = ln + rn;
		ln = rn;
		rn = cn % 10;

		cycle++;
	} while (N != (ln * 10 + rn));

	cout << cycle;

	return 0;
}
*/

/*
// BAEKJOON 1157번 : 단어 공부
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string words;
	vector<int> useLotWords(26, 0);

	cin >> words;

	for (int i = 0; i < words.size(); i++)
	{
		if (words[i] >= 'a' && words[i] <= 'z')
		{
			useLotWords[words[i] - 'a']++;
		}
		else if (words[i] >= 'A' && words[i] <= 'Z')
		{
			useLotWords[words[i] - 'A']++;
		}
	}

	int lotIndex = -1;
	int lotValue = 0;
	bool bIsDuplicated = false;

	for (int i = 0; i < useLotWords.size(); i++)
	{
		if (useLotWords[i] > lotValue)
		{
			lotIndex = i;
			lotValue = useLotWords[i];

			bIsDuplicated = false;
		}
		else if (useLotWords[i] == lotValue && useLotWords[i] != 0)
		{
			bIsDuplicated = true;
		}
	}

	if (bIsDuplicated == true)
	{
		cout << "?";
	}
	else
	{
		string answer;
		answer = 'A' + lotIndex;

		cout << answer;
	}

	return 0;
}
*/

/*
// BAEKJOON 1546번 : 평균
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	float sum = 0.f;

	cin >> N;

	vector<float> scores(N);
	float maxScore = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> scores[i];
		if (scores[i] > maxScore)
			maxScore = scores[i];
	}

	for (int i = 0; i < N; i++)
	{
		sum += scores[i] / maxScore * 100;
	}

	cout << sum / N;

	return 0;
}
*/