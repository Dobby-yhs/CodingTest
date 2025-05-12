//#include <iostream>
//using namespace std;

 /*
 // BEAKJOON 2741번 : N 찍기 - printf, scanf 사용 // 8ms
int main() { 
	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		printf("%d\n", i);
	}
}
*/

// std::ios_base::sync_with_stdio(0); 사용 + endl 사용 -> 시간 초과

/*
// BAEKJOON 2741번 : N 찍기 -  std::ios_base::sync_with_stdio(0); 사용
int main() // 4ms
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(0);  // 사용 안할 시 8ms

	int n;

	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		cout << i << "\n";
	}

	return 0;
}
*/

/*
// BAEKJOON 2741번 : N 찍기 - 개행 문자 사용
int main() // 8ms
{
	int n;

	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		cout << i << "\n";
	}

	return 0;
}
*/


/*
// BAEKJOON 2739번 : 구구단
int main()
{
	int n;

	std::cin >> n;

	for (int i = 1; i <= 9; ++i)
	{
		std::cout << n << " * " << i << " = " << n * i << std::endl;
	}
}
*/