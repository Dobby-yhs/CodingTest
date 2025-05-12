//#include <iostream>
//#include <algorithm>
//#include <string>
//
//using namespace std;

/*
// BAKEJOON 2914번 : 저작권
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int A, I;
	cin >> A >> I;

	int min_melodies = A * (I - 1) + 1;

	cout << min_melodies << endl;

	return 0;
}
*/


/*
// BAEKJOON 2857번 : FBI
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string fbi;
	bool check = false;

	for (int i = 1; i <= 5; ++i)
	{
		getline(cin, fbi);

		if (string::npos != fbi.find("FBI"))
		{
			cout << i << "\n";
			check = true;
		}
	}

	if (check == false)
		cout << "HE GOT AWAY!";

	return 0;
}
*/

/*
// BAEKJOON 2588번 : 곱셈
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int x, y;
	cin >> x >> y;

	int a, b, c, d;

	a = x * (y % 10);
	b = x * ((y % 100) / 10);
	c = x * (y / 100);
	d = x * y;

	cout << a << "\n" << b << "\n" << c << "\n" << d;

	return 0;
}
*/

/*
// BAEKJOON 2525번 : 오븐 시계 - 계산 후 출력
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c;

	cin >> a >> b;
	cin >> c;

	int total_min = a * 60 + b;
	total_min += c;

	int hour = (total_min / 60) % 24;
	int min = total_min % 60;

	cout << hout << " " << min;

	return 0;
}
*/

/*
// BAEKJOON 2525번 : 오븐 시계 - IF문
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c;

	cin >> a >> b;
	cin >> c;

	int m = b + c;
	int h = a + m / 60;

	if (m >= 60)
		if (h >= 24)
			cout << h - 24 << " " << m % 60;
		else
			cout << h << " " << m % 60;
	else
		cout << a << " " << m;
	
	
	return 0;
}
*/