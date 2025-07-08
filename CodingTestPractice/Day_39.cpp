//#include <iostream>
//
//using namespace std;

/*
// BAKEJOON 2839번 : 설탕 배달 - 틀린 답변
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int count = 0;

	while (1)
	{
		cout << n << endl;
		if (n % 5 == 0)
		{
			count += n / 5;
			break;
		}

		n -= 3;
		count++;

		if (n < 0)
		{
			count = -1;
			break;
		}
	}

	cout << count;

	return 0;
}
*/

/*
// BAKEJOON 2839번 : 설탕 배달 - 틀린 답변
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int count = 0;

	while (1)
	{
		if (n == 0)
		{
			break;
		}
		else if (n < 0)
		{
			count = -1;
			break;
		}

		if ((n % 3) != 0 || n > 10)
		{
			n -= 5;
			count++;
		}
		else
		{
			n -= 3;
			count++;
		}
	}

	cout << count;

	return 0;
}
*/