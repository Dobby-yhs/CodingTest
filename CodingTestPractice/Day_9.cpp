#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

/*
// BAEKJOON 11720번 : 숫자의 합
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	string numbers;

	cin >> n;

	cin >> numbers;

	int sum = 0;

	for (int i = 0; i < n; ++i)
	{
		sum += numbers[i] - '0';
	}

	cout << sum;

	return 0;
}
*/

/*
// BAKEJOON 11365번 : !밀비 급일 - 수정
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;

	while (1)
	{
		getline(cin, str);

		if (str == "END")
		{
			break;
		}

		reverse(str.begin(), str.end());
		cout << str << endl;
	}

	return 0;
}
*/

/*
// BAKEJOON 11365번 : !밀비 급일
int main()
{
 	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string str = "";
	
	size_t pos = str.find("END");

	while ( 1 )
	{
		getline(cin, str);
		pos = str.find("END");
		
		if (string::npos != pos)
		{
			break;
		}
		else
		{
			for (int i = str.length(); i >= 0; --i)
			{
				cout << str[i];
			}

			str = "";
			cout << "\n";
		}
	}

	return 0;
}
*/

/*
// BAKEJOON 10808번 : 알파벳 개수 - 수정(count 함수)
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string S;
	cin >> S;

	for (int i = 'a'; i <= 'z'; i++)
	{
		cout << count(S.begin(), S.end(), i) << ' ';
	}

	return 0;
}
*/

/*
// BAKEJOON 10808번 : 알파벳 개수 - 수정(ASCII 값의 차이)
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string S;
	cin >> S;

	int k[26] = { 0, };

	// for (auto it : S)를 통해 범위 기반 for 루프 구문을 활용할 수 있습니다.
	for (int i = 0; i < S.length(); i++)
	{
		k[S[i] - 'a'] += 1;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << k[i] << ' ';
	}

	return 0;
}
*/

/*
// BAKEJOON 10808번 : 알파벳 개수
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string S;
	int k[26] = { 0 };

	getline(cin, S);

	for (int i = 0; i < S.length(); ++i)
	{
		// 97 ~ 122
		for (int j = 'a'; j <= 'z'; ++j)
		{
			if (S[i] == j)
				k[j - 'a']++;
		}
	}

	for (int i = 0; i <= 25; ++i)
	{
		cout << k[i] << " ";
	}

	return 0;
}
*/

/*
// BAKEJOON 6749번 : Next in line
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n1, n2;

	cin >> n1 >> n2;

	cout << 2 * n2 - n1;


	return 0;
}
*/

/*
// BAKEJOON 5554번 : 심부름 가는 길
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a;
	int b;
	int c;
	int d;

	cin >> a >> b >> c >> d;

	cout << (a + b + c + d) / 60 << "\n";
	cout << (a + b + c + d) % 60;


	return 0;
}
*/

/*
// BAEKJOON 3046번 : R2
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int R1;
	int S;

	cin >> R1 >> S;

	cout << 2 * S - R1;


	return 0;
}
*/