#include <iostream>
#include <string>

using namespace std;

/*
// BAEKJOON 2577번 : 숫자의 개수
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int num[10] = { 0, };

	int a, b, c;
	cin >> a >> b >> c;

	string s = to_string(a * b * c);

	for (int i = 0; i < s.length(); ++i)
	{
		num[s[i] - 48]++;
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << num[i] << "\n";
	}

	return 0;
}
*/

/*
// BAEKJOON 10809번 : 알파벳 찾기
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	int answer[26];
	std::fill(answer, answer + 26, -1);

	cin >> s;

	for (int i = 0; i < s.length(); ++i)
	{
		if (answer[s[i] - 97] == -1)
			answer[s[i] - 97] = i;
	}

	for (int i = 0; i < 26; ++i)
		cout << answer[i] << " ";

	return 0;
}
*/

/*
// BAEKJOON 2675번 : 문자열 반복 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int caseNum = 0;

	cin >> caseNum;

	for (int i = 0; i < caseNum; ++i)
	{
		int r;
		string s;

		cin >> r >> s;

		for (int j = 0; j < s.length(); ++j)
		{
			for (int k = 0; k < r; ++k)
			{
				cout << s[j];
			}
		}

		cout << "\n";
	}

	return 0;
}
*/

/*
// BAEKJOON 1152번 : 단어의 개수 - stringstream 활용
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	getline(std::cin, str);

	stringstream ss(str);
	string word;         
	int answer = 0;      

	while (ss >> word)
	{
		answer++;
	}

	std::cout << answer;

	return 0;
}
*/

/*
// BAEKJOON 1152번 : 단어의 개수 - BAEKJOON 환경 이용
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;

	int answer = 0;

	while (cin >> str)
	{
		++answer;
	}

	cout << answer;

	return 0;
}
*/

/*
// BAEKJOON 1152번 : 단어의 개수
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	char space = ' ';

	int answer = 0;

	getline(cin, str);
	
	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] != space && str[i + 1] == space)
			++answer;
		
	}
	if (str[str.length() - 1] != space)
		++answer;


	cout << answer;

	return 0;
}
*/