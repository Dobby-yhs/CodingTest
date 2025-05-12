//#include <iostream>
//
//using namespace std;

/*
// BAEKJOON 4153번 : 직각삼각형
void checkTriangle(int a, int b, int c)
{
	if (a * a == b * b + c * c)
		cout << "right\n";
	else
		cout << "wrong\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int x, y, z;
	int max = 0;

	while (1)
	{
		cin >> x >> y >> z;
		
		if (x == 0 && y == 0 && z == 0)
			break;

		max = std::max({ x, y, z });
		
		if (max == x)
			checkTriangle(x, y, z);
		else if (max == y)
			checkTriangle(y, x, z);
		else if (max == z)
			checkTriangle(z, x, y);
	}

	return 0;
}
*/