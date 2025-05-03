#define _USE_MATH_DEFINES // M_PI와 같은 수학 상수 사용을 위해 정의

#include <iostream>
#include <cmath>    // M_PI 상수 사용을 위해 포함
#include <iomanip>  // 출력 정밀도 조정을 위해 포함
using namespace std;

/*
// BAEKJOON 3053번 : 택시 기하학
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int R;
	std::cin >> R;

	double euclidean_area = M_PI * R * R;
	double taxicab_area = 2.0 * R * R;

	std::cout << std::fixed << std::setprecision(6);

	std::cout << euclidean_area << std::endl;
	std::cout << taxicab_area << std::endl;

	return 0;
}
*/


/*
// BAEKJOON 3009번 : 네 번째 점 - 수정
int main()
{
	int x[3], y[3];

	for (int i = 0; i < 3; ++i)
	{
		cin >> x[i] >> y[i];
	}

	int resultX, resultY;

	if (x[0] == x[1])
		resultX = x[2];
	else if (x[0] == x[2])
		resultX = x[1];
	else
		resultX = x[0];


	if (y[0] == y[1])
		resultY = y[2];
	else if (y[0] == y[2])
		resultY = y[1];
	else
		resultY = y[0];

	cout << resultX << " " << resultY << endl;

	return 0;
}
*/

/*
// BAEKJOON 3009번 : 네 번째 점
int getVertex(int arr[3][2], int n)
{
	int answer = 0;

	if (arr[0][n] == arr[1][n])
	{
		answer = arr[2][n];
	}
	else
	{
		if (arr[0][n] == arr[2][n])
		{
			answer = arr[1][n];
		}
		else
		{
			answer = arr[0][n];
		}
	}

	return answer;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int vertex[3][2];
	int answer[2];

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			cin >> vertex[i][j];
		}
	}

	answer[0] = getVertex(vertex, 0);
	answer[1] = getVertex(vertex, 1);
	
	cout << answer[0] << " " << answer[1];

	return 0;
}
*/

/*
// BAEKJOON 2953번 : 나는 요리사다 - 수정
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int maxScore = 0;
	int winner = 0;

	for (int i = 1; i <= 5; ++i)
	{
		int score = 0;
		for (int j = 0; j < 4; ++j)
		{
			int point;
			cin >> point;

			score += point;
		}
		if (score > maxScore)
		{
			maxScore = score;
			winner = i;
		}
	}

	cout << winner << " " << maxScore;

	return 0;
}
*/

/*
// BAEKJOON 2953번 : 나는 요리사다
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int input[4];
	int output[5];
	int score = 0;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			cin >> input[j];
			score += input[j];
		}
		output[i] = score;
		score = 0;	
	}

	int max_value = output[0];
	int winner = 1;

	for (int i = 1; i < 5; ++i)
	{
		if (output[i] > max_value)
		{
			max_value = output[i];
			winner = i + 1;
		}
	}

	cout << winner << " " << max_value;

	return 0;
}
*/