//#include <iostream>
//#include <vector>     
//#include <algorithm>  
//#include <string>
//
//using namespace std;

/*
// BAKEJOON 1181번 : 단어 정렬
bool compare(const string& a, const string& b)
{
	if (a.length() != b.length())
		return a.length() < b.length();
	return a < b;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<string> words(n);

	for (int i = 0; i < n; i++)
	{
		cin >> words[i];
	}

	sort(words.begin(), words.end(), compare);

	string prev = "";
	for (const string& word : words)
	{
		if (word != prev)
		{
			cout << word << '\n';
			prev = word;
		}
	}

	return 0;
}
*/

/*
// BAKEJOON 4673번 : 셀프 넘버
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> noSelfNum;
	bool isSelf = true;

	for (int i = 1; i < 10000; i++)
	{
		int currentNum = i;
		int digitSum = 0;

		while (currentNum > 0)
		{
			digitSum += currentNum % 10;
			currentNum /= 10;
		}

		int sum = i + digitSum;
		noSelfNum.push_back(sum);
		
		for (int j : noSelfNum)
		{
			if (i == j)
			{
				noSelfNum.erase(find(noSelfNum.begin(), noSelfNum.end(), i));
				isSelf = false;
				break;
			}
		}
		
		if (isSelf)
			cout << i << '\n';

		isSelf = true;
	}

	return 0;
}
*/