//#include <iostream>
//#include <vector>     
//#include <string>     
//#include <algorithm>  
//
//using namespace std;

/*
// BAKEJOON 10814번 : 나이순 정렬 - struct 활용
struct Person
{
	int age;
	string name;
	int order;
};

bool compare(const Person& a, const Person& b)
{
	if (a.age == b.age)
		return a.order < b.order;

	return a.age < b.age;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<Person> people(n);

	for (int i = 0; i < n; i++)
	{
		cin >> people[i].age >> people[i].name;
		people[i].order = i;
	}

	sort(people.begin(), people.end(), compare);

	for (const auto& person : people)
	{
		cout << person.age << ' ' << person.name << '\n';
	}

	return 0;
}
*/

/*
// BAKEJOON 10814번 : 나이순 정렬 - stable_sort 활용
bool compare(const pair<int, string>& a, const pair<int, string>& b)
{
	return a.first < b.first;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<pair<int, string>> members(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> members[i].first >> members[i].second;
	}

	stable_sort(members.begin(), members.end(), compare);

	for (const auto& member : members)
	{
		cout << member.first << " " << member.second << '\n';
	}

	return 0;
}
*/

/*
// BAKEJOON 10814번 : 나이순 정렬 - 잘못된 풀이 (시간 초과)
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	pair<int, string> p;
	vector<pair<int, string>> subscriber;
	bool bIsSort = false;

	while (n--)
	{
		cin >> p.first >> p.second;
		subscriber.push_back(p);
	}

	while (true)
	{
		int i = 0;
		bIsSort = false;

		for (i; i < subscriber.size(); i++)
		{
			if (i + 1 >= subscriber.size())
				break;

			if (subscriber[i].first == subscriber[i + 1].first)
				continue;

			if (subscriber[i].first > subscriber[i + 1].first)
			{
				swap(subscriber[i], subscriber[i + 1]);

				bIsSort = true;
			}
		}

		if (!bIsSort)
		{
			break;
		}
	}

	for (const auto& p : subscriber)
	{
		cout << p.first << ' ' << p.second << '\n';
	}

	return 0;
}
*/

/*
// BAKEJOON 1427번 : 소트인사이드 - 사용자 정의 람다 사용
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string num;
	cin >> num;

	sort(num.begin(), num.end(), [](char a, char b)
		{
			return a > b;
		});

	cout << num;

	return 0;
}
*/

/*
// BAKEJOON 1427번 : 소트인사이드 - sort 사용
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string num;
	cin >> num;

	sort(num.begin(), num.end(), greater<char>());

	cout << num;

	return 0;
}
*/