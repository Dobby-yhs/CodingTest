//#include <iostream>
//
//using namespace std;

/*
// BAEKJOON 4999번 : 아!
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string word;
	string answer;

	cin >> word;
	cin >> answer;

	if (string::npos != word.find(answer))
	{
		cout << "go";
	}
	else
	{
		cout << "no";
	}


	return 0;
}
*/

/*
// BAEKJOON 4101번 : 크냐?
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = -1, m = -1;

	while (1)
	{
		cin >> n >> m;

		if (n == 0 && m == 0)
			break;
		else if (n > m)
			cout << "Yes\n"; 
		else
			cout << "No\n";
	}
	
	return 0;
}
*/

/*
// BAEKJOON 3003번 : 킹, 퀸, 룩, 비숍, 나이트, 폰
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int king = 0, queen = 0, rook = 0, bishop = 0, knight = 0, pawn = 0;
	
	int chess_piece[6] = { 1, 1, 2, 2, 2, 8 };

	cin >> king >> queen >> rook >> bishop >> knight >> pawn;

	int holded_chess_piece[6] = { king, queen, rook, bishop, knight, pawn };

	for (int i = 0; i < 6; ++i)
	{
		cout << chess_piece[i] - holded_chess_piece[i] << " ";
	}


	return 0;
}
*/

/*
// BAEKJOON 2753번 : 윤년
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int year;
	cin >> year;

	cout << (0 == (year % 4) && (0 != (year % 100) || 0 == (year % 400)));


	return 0;
}
*/

/*
// BAEKJOON 2744번 : 대소문자 바꾸기 - islower 활용
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string word;
	cin >> word;

	for (char& c : word)
	{
		if (islower(c))
		{
			c = toupper(c);
		}
		else
		{
			c = tolower(c);
		}
	}

	cout << word;
	return 0;
}
*/

/*
// BAEKJOON 2744번 : 대소문자 바꾸기 - 아스키코드 활용
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string word;

	cin >> word;

	for (int i = 0; i <= word.length(); ++i)
	{
		if ((int)word[i] >= 97)
		{
			word[i] = toupper(word[i]);
		}
		else
		{
			word[i] = tolower(word[i]);
		}
	}

	cout << word;

	return 0;
}
*/