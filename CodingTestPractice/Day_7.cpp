#include <iostream>
#include <string>

/*
// BAEKJOON 1264번 : 모음의 개수
using namespace std;

int main() {
	string str;
	int count = 0;

	while (true) {
		getline(cin, str);

		if (str != "#") {
			for (int i = 0; i < str.length(); i++) {
				if (tolower(str[i]) == 'a')
					++count;
				else if (tolower(str[i]) == 'e')
					++count;
				else if (tolower(str[i]) == 'i')
					++count;
				else if (tolower(str[i]) == 'o')
					++count;
				else if (tolower(str[i]) == 'u')
					++count;
			}

			cout << count << endl;
			count = 0;
		}
		else {
			break;
		}

	}

	return 0;
}
*/

/*
// BAEKJOON 10807번 : 개수 세기
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int count; int findNum; 
	
	int num; vector<int> nums;

	int answer = 0;

	cin >> count;
	
	for (int i = 0; i < count; ++i)
	{
		cin >> num;
		nums.push_back(num);
	}

	cin >> findNum;

	for (int i = 0; i < nums.size(); ++i)
	{
		if (nums[i] == findNum)
			++answer;
	}

	cout << answer;

	return 0;
}
*/