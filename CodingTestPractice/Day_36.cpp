//#include <iostream>
//#include <string>    // 1436번
//#include <vector>    // 7568번
//
//using namespace std;

/*
// BAKEJOON 7568번 : 덩치 - pair 활용
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<pair<int, int>> bodyes(n);

	for (int i = 0; i < n; i++) {
		cin >> bodyes[i].first >> bodyes[i].second;
	}

	for (int i = 0; i < n; i++) {
		int rank = 1;

		for (int j = 0; j < n; j++)
		{
			if (i == j) continue;

			if (bodyes[j].first > bodyes[i].first 
				&& bodyes[j].second > bodyes[i].second) 
			{
				rank++;
			}
		}

		cout << rank << " ";
	}

	return 0;
}
*/

/*
// BAKEJOON 7568번 : 덩치 - struct 활용
struct Body
{
	int weight;
	int height;
	int rank;
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	
	vector<Body> bodyes(n);

	for (int i = 0; i < n; i++)
	{		
		cin >> bodyes[i].weight >> bodyes[i].height;
		bodyes[i].rank = 1;
	}

	for (int i = 0; i < bodyes.size(); i++)
	{
		for (int j = 0; j < bodyes.size(); j++)
		{
			if (i == j) continue;

			if ((bodyes[i].weight < bodyes[j].weight)
				&& (bodyes[i].height < bodyes[j].height))
			{
				bodyes[i].rank++;
			}
		}
	}

	for (auto& b : bodyes)
	{
		cout << b.rank << " ";
	}

	return 0;
}
*/

/*
// BAKEJOON 1436번 : 영화감독 숌
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int count = 0;
	int number = 666;

	while (true)
	{
		if (to_string(number).find("666") != string::npos)
			count++;

		if (count == n)
		{
			cout << number;
			break;
		}

		number++;
	}

	return 0;
}
*/