//#include <iostream>
//#include <vector>
//#include <string>
//#include <sstream>
//#include <algorithm>
//
//using namespace std;

/*
// BAKEJOON 9093번 : 단어 뒤집기 - reverse() 활용
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	cin.ignore();

	while (t--)
	{
		string sentence;
		getline(cin, sentence);

		stringstream ss(sentence);
		string word;

		while (ss >> word)
		{
			reverse(word.begin(), word.end());
			cout << word << ' ';
		}
		cout << '\n';
	}

	return 0;
}
*/

/*
// BAKEJOON 9093번 : 단어 뒤집기 - 인덱스 활용
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	cin.ignore();

	string sentence = "";

	int count = 0;

	while (t--)
	{
		getline(cin, sentence);
		sentence += ' ';

		for (int i = 0; i < sentence.size(); i++)
		{

			if (sentence[i] == ' ')
			{
				int k = 1;
				int last = count + (i - count) / 2;

				for (int j = count; j < last; j++)
				{
					char temp = sentence[j];
					sentence[j] = sentence[i - k];
					sentence[i - k] = temp;

					k++;
				}

				count = i + 1;
			}
		}

		cout << sentence << "\n";
		count = 0;
	}

	return 0;
}
*/

/*
// BAKEJOON 1292번 : 쉽게 푸는 문제
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	int n = 1;
	int sum = 0;
	vector<int> math;

	while (true)
	{
		for (int j = 0; j < n; j++)
		{
			math.push_back(n);

			if (math.size() == b)
			{
				for (int i = a - 1; i < b; i++)
				{
					sum += math[i];
				}

				cout << sum;
				return 0;
			}
		}

		n++;
	}

	return 0;
}
*/

/*
// BAKEJOON 9506번 : 약수들의 합
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	vector<string> files(t);

	for (int i = 0; i < t; i++)
	{
		cin >> files[i];
	}

	string result = "";

	for (int i = 0; i < files[0].size();; i++)
	{
		char current = files[0][i];
		bool all_same = true;

		for (int j = 1; j < t; j++)
		{
			if (files[j][i] != current)
			{
				all_same = false;
				break;
			}
		}

		if (all_same)
			result += current;
		else
			result += '?';
	}

	cout << result;

	return 0;
}
*/

/*
// BAKEJOON 9506번 : 약수들의 합 - 구조적, 효율적으로 부족
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	vector<string> files(t);
	bool bCorrect = false;


	for (int i = 0; i < t; i++)
	{
		cin >> files[i];

		if (t == 1)
		{
			cout << files[i];
			return 0;
		}
	}

	vector<string> findFile(files[0].size());

	for (int i = 0; i < files[0].size(); i++)
	{
		for (int j = 1; j < t; j++)
		{
			if (files[j - 1][i] == files[j][i])
				bCorrect = true;
			else
			{
				bCorrect = false;
				findFile[i] = '?';

				break;
			}

			if (bCorrect == true)
			{
				findFile[i] = files[j][i];
			}
		}
	}

	for (int i = 0; i < findFile.size(); i++)
	{
		cout << findFile[i];
	}

	return 0;
}
*/

/*
// BAKEJOON 9506번 : 약수들의 합
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	int copyN;

	vector<int> divisor;
	int divisorSum = 0;

	while (1)
	{
		cin >> n;
		copyN = n;

		if (n == -1)
			return 0;

		for (int i = 1; i < n; i++)
		{
			if ((n % i) == 0)
			{
				divisor.push_back(i);
				divisorSum += i;
			}
		}

		if (divisorSum == n)
		{
			cout << n << " = ";

			for (int i = 0; i < divisor.size(); i++)
			{
				if (i != divisor.size() - 1)
					cout << divisor[i] << " + ";
				else
					cout << divisor[i];
			}
		}
		else
		{
			cout << n << " is NOT perfect.";
		}

		divisorSum = 0;
		divisor.clear();
		cout << "\n";
	}

	return 0;
}
*/