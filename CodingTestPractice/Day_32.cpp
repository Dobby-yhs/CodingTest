//#include <iostream>
//#include <string>
//
//using namespace std;

/*
// BAKEJOON 2941번 : 크로아티아 알파벳 - find와 replace 활용
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string word;
	cin >> word;

	string alphabets[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	int idx;

	for (int i = 0; i < 8; i++)
	{
		while (1)
		{
			idx = word.find(alphabets[i]);

			if (idx == string::npos)
				break;
			word.replace(idx, alphabets[i].size(), "0");
		}
	}

	cout << word.size();

	return 0;
}
*/

/*
// BAKEJOON 2941번 : 크로아티아 알파벳
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string word;
	cin >> word;

	string alphabets[7] = { "c=", "c-", "d-", "lj", "nj", "s=", "z=" };
	string alphabet = "dz=";
	int count = 0;
	bool isNext = false;

	for (int i = 0; i < word.size(); i++)
	{
		string str;

		if ((i + 1) >= word.size())
		{
			count++;
			break;
		}
		else
		{
			str = string(1, word[i]) + word[i + 1];
		}

		for (string ss : alphabets)
		{
			if (str == ss)
			{
				count++;
				i++;
				isNext = true;
				break;
			}
		}

		if (!isNext)
		{
			str += word[i + 2];
			if (str == alphabet && i < word.size() - 2)
			{
				count++;
				i += 2;
			}
			else
			{
				count++;
			}
		}

		isNext = false;
	}

	cout << count;

	return 0;
}
*/