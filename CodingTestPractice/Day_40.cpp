//#include <iostream>
//#include <string>    // 9012번
//#include <stack>     // 9012번
//
//using namespace std;

/*
// BAEKJOON 9012번 : 괄호 - 스택 방식
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while (t--)
	{
		stack<char> st;
		string str;

		cin >> str;

		for (char c : str)
		{
			if (c == '(')
			{
				st.push(c);
			}
			else
			{
				if (st.empty())
				{
					st.push(c);
					break;
				}
				st.pop();
			}
		}

		cout << (st.empty() ? "YES" : "NO") << '\n';
	}

	return 0;
}
*/

/*
// BAEKJOON 9012번 : 괄호 - 카운트 방식
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while (t--)
	{
		string str;
		int count = 0;

		cin >> str;

		for (char c : str)
		{
			if (c == '(')
				count++;
			if (c == ')')
				count--;

			if (count < 0)
				break;
		}

		cout << ((count == 0) ? "YES" : "NO") << '\n';
	}

	return 0;
}
*/