//#include <iostream>
//
//using namespace std;

/*
// BAEKJOON 2292¹ø : ¹úÁý
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string word;
	int time = 0;

	cin >> word;

	for (int i = 0; i < word.length(); i++)
	{
		if (word[i] >= 'A' && word[i] <= 'C')
			time += 3;
		else if (word[i] >= 'D' && word[i] <= 'F')
			time += 4;
		else if (word[i] >= 'G' && word[i] <= 'I')
			time += 5;
		else if (word[i] >= 'J' && word[i] <= 'L')
			time += 6;
		else if (word[i] >= 'M' && word[i] <= 'O')
			time += 7;
		else if (word[i] >= 'P' && word[i] <= 'S')
			time += 8;
		else if (word[i] >= 'T' && word[i] <= 'V')
			time += 9;
		else if (word[i] >= 'W' && word[i] <= 'Z')
			time += 10;
	}

	cout << time;

	return 0;
}
*/

/*
// BAEKJOON 2292¹ø : ¹úÁý
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int answer = 1;

	int min = 2, max = 7;

	int i = 1;

	while(1)
	{
		answer++;
		if (n == 1)
		{
			cout << 1;
			return 0;
		}
		if (n >= min && n <= max)
		{
			cout << answer;
			return 0;
		}

		min += (6 * i);
		max += (6 * (i + 1));
		i++;
	}
}
*/