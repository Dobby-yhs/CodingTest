//#include <iostream>
//#include <vector>    // 2581번, 10813번, 10811번
//#include <algorithm> // 10811번
//
//using namespace std;

/*
// BAEKJOON 2587번 : 대표값2 - sort 사용  x
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> num(5);
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> num[i];
		sum += num[i];
	}

	for (int i = 0; i < 4; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < 5; j++)
		{
			if (num[j] < num[minIndex])
			{
				minIndex = j;
			}
		}

		int temp = num[i];
		num[i] = num[minIndex];
		num[minIndex] = temp;
	}

	cout << sum / 5 << "\n" << num[2];

	return 0;
}
*/

/*
// BAEKJOON 2587번 : 대표값2
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> num(5);
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> num[i];
		sum += num[i];
	}

	sort(num.begin(), num.end());

	cout << sum / 5 << "\n" << num[2];

	return 0;
}
*/

/*
// BAEKJOON 10811번 : 바구니 뒤집기 - reverse 사용 x
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	cin >> N >> M;

	vector<int> basket;
	int i = 1;

	while (N--)
	{
		basket.push_back(i);
		i++;
	}

	while (M--)
	{
		int before, after;
		cin >> before >> after;

		before -= 1;
		after -= 1;

		while (before < after)
		{
			int temp = basket[before];
			basket[before] = basket[after];
			basket[after] = temp;

			before++;
			after--;
		}
	}

	for (int i = 0; i < basket.size(); i++)
	{
		cout << basket[i] << " ";
	}

	return 0;
}
*/

/*
// BAEKJOON 10811번 : 바구니 뒤집기
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	cin >> N >> M;

	vector<int> basket;
	int i = 1;

	while (N--)
	{
		basket.push_back(i);
		i++;
	}

	while (M--)
	{
		int before, after;
		cin >> before >> after;

		reverse(&basket[before] - 1, &basket[after]);
		// reverse(basket.begin() + before - 1, basket.begin() + after);와 동일
	}

	for (int i = 0; i < basket.size(); i++)
	{
		cout << basket[i] << " ";
	}

	return 0;
}
*/

/*
// BAEKJOON 10813번 : 공 바꾸기
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	cin >> N >> M;

	vector<int> basket;
	int i = 1;

	while (N--)
	{
		basket.push_back(i);
		i++;
	}

	while (M--)
	{
		int before, after;
		cin >> before >> after;

		before -= 1;
		after -= 1;

		int temp;
		temp = basket[before];
		basket[before] = basket[after];
		basket[after] = temp;
	}

	for (int i = 0; i < basket.size(); i++)
	{
		cout << basket[i] << " ";
	}

	return 0;
}
*/

/*
// BAEKJOON 1712번 : 손익분기점
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int A, B, C;
	cin >> A >> B >> C;

	int point = -1;

	if (B < C)
	{
		point = A / (C - B) + 1;
	}

	cout << point;

	return 0;
}
*/

/*
// BAEKJOON 2581번 : 소수
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	cin >> N >> M;

	bool isPrime = false;
	vector<int> primeNumber;

	for (int i = N; i <= M; i++)
	{
		for (int j = 2; j <= i; j++)
		{
			if (i % j != 0 || j == i)
			{
				isPrime = true;
			}
			else
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime == true)
		{
			primeNumber.push_back(i);
			isPrime = false;
		}
	}

	if (primeNumber.size() == 0)
	{
		cout << -1;
	}
	else
	{
		int primeMin = primeNumber[0];
		int primeSum = 0;

		for (int i = 0; i < primeNumber.size(); i++)
		{
			primeSum += primeNumber[i];
		}

		cout << primeSum << "\n" << primeMin;
	}

	return 0;
}
*/