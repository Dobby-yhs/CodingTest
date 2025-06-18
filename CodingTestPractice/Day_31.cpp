//#include <iostream>
//#include <string>    // 1316번
//#include <vector>    // 2751번
//#include <algorithm> // 2751번
//
//using namespace std;

/*
// BAKEJOON 2751번 : 수 정렬하기 2
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int num;
	vector<int> nums;

	while (n--)
	{
		cin >> num;
		nums.push_back(num);
	}

	sort(nums.begin(), nums.end());

	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << '\n';
	}

	return 0;
}
*/

/*
// BAKEJOON 1316번 : 그룹 단어 체커 - bool 배열 활용
bool isGroupWord(const string& word)
{
	bool seen[26] = { false };

	char prev = 0;
	for (char c : word)
	{
		if (c != prev)
		{
			if (seen[c - 'a'])
				return false;

			seen[c - 'a'] = true;
			prev = c;
		}
	}

	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, count = 0;
	cin >> n;

	while (n--)
	{
		string word;
		cin >> word;

		if (isGroupWord(word))
			count++;
	}

	cout << count;

	return 0;
}
*/

/*
// BAKEJOON 1316번 : 그룹 단어 체커
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int count = 0;
	bool isGroup = true;

	int n;
	cin >> n;

	while (n--)
	{
		string word;
		cin >> word;
		
		isGroup = true;

		if (word.size() == 1)
		{
			count++;
		}
		else
		{
			for (int i = 1; i < word.size(); i++)
			{
				if (word[i] != word[i - 1])
				{
					for (int j = 0; j < i; j++)
					{
						if (word[j] == word[i])
						{
							isGroup = false;
							break;
						}
					}
				}
			}

			if (isGroup)
				count++;
		}
	}

	cout << count;

	return 0;
}
*/