//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;

/*
// Programmers 2025 코드챌린지 2차 예선 : 택배 상자 꺼내기 - 수학적 원리 사용
int solution(int n, int w, int num)
{
	int layer = (num - 1) / w;              
	int index_in_layer = (num - 1) % w;    

	int real_index;  

	if (layer % 2 == 0)
	{
		real_index = index_in_layer;
	}
	else
	{
		real_index = w - 1 - index_in_layer;
	}

	int n_layer = (n - 1) / w;         
	int n_index_in_layer = (n - 1) % w;

	int n_real_index;
	bool bIsRight;

	if (n_layer % 2 == 0)
	{
		n_real_index = n_index_in_layer;
		bIsRight = true;
	}
	else
	{
		n_real_index = w - 1 - n_index_in_layer;
		bIsRight = false;
	}

	int count = 0;

	for (int i = layer; i < n_layer; i++)
	{
		count++;
	}

	if (bIsRight && real_index <= n_real_index)
	{
		count++;
	}
	else if (!bIsRight && real_index >= n_real_index)
	{
		count++;
	}


	return count;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cout << solution(13, 3, 6);

	return 0;
}
*/

/*
// Programmers 2025 코드챌린지 2차 예선 : 택배 상자 꺼내기
int solution(int n, int w, int num)
{
	int answer = 1;
	int maxIndex = ceil(double(n) / double(w));

	vector<vector<int>> boxes(maxIndex, vector<int>(w, 0));

	int boxNum = 1;
	bool bIsRight = true;

	int width;
	int height;

	for (int i = 0; i < maxIndex; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (boxNum == num)
			{
				height = i;
				width = j;
			}

			if (boxNum > n + w)
			{
				break;
			}
			else if (bIsRight)
			{
				if (boxNum > n)
				{
					boxes[i][j] = -1;
				}
				else
				{
					boxes[i][j] = boxNum;
				}
				boxNum++;
			}
			else
			{
				if (boxNum > n)
				{
					boxes[i][j] = -1;
				}
				else
				{
					boxes[i][j] = boxNum;
				}
				boxNum--;
			}
		}

		boxNum += w;
		boxNum = bIsRight ? boxNum - 1 : boxNum + 1;
		bIsRight = !bIsRight;
	}

	for (int i = height; i < boxes.size(); i++)
	{
		if (height == boxes.size() - 1 ? 1 : boxes[height + 1][width] == -1)
		{
			break;
		}
		else if (boxes[height][width] == boxes[boxes.size() - 1][width])
		{
			break;
		}
		else
		{
			answer++;
			height++;
		}
	}

	return answer;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cout << solution(13, 3, 6);

	return 0;
}
*/

/*
// BAEKJOON 11653번 : 소인수분해 - 효율적 문제 풀이
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 2; i * i <= n; ++i)
	{
		while (n % i == 0)
		{
			cout << i << '\n';
			n /= i;
		}
	}

	if (n > 1)
		cout << n << '\n';

	return 0;
}
*/

/*
// BAEKJOON 11653번 : 소인수분해 - 비효율적 문제 풀이
int nextPrime(int prime)
{
	int i = prime;
	prime += 1;

	while (true)
	{
		if (prime % i == 0 && prime / i == 1)
			break;

		i++;
	}
	
	prime = i;
	
	return prime;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	int prime = 2;

	cin >> n;

	while (n != 0)
	{
		if (n == 1)
			return 0;
		else if ((n % prime) == 0)
		{
			n /= prime;
			cout << prime << "\n";
		}
		else
		{
			prime = nextPrime(prime);
		}
	}

	return 0;
}
*/