//#include <iostream>
//#include <vector>  // BAEKJOON 15596번
//
//using namespace std;

/*
// BAEKJOON 2920번 : 음계
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[8];
    string answer;
    bool mix = false;

    for (int i = 0; i < 8; i++)
        cin >> arr[i];

    for (int i = 0; i < 7; i++)
    {
        if (arr[i + 1] == (arr[i] + 1))
        {
                answer = "ascending";
        }
        else if (arr[i + 1] == (arr[i] - 1))
        {
                answer = "descending";
        }
        else
        {
            answer = "mixed";
            cout << answer;

            return 0;
        }
    }

    cout << answer;

    return 0;
}
*/

/*
// BAEKJOON 15596번 : 정수 N개의 합
long long sum(vector<int>& a)
{
    long long ans = 0;
    
    for (int i = 0; i < a.size(); i++)
    {
        ans += a[i];
    }

    return ans;
}
*/

/*
// BAEKJOON 10870번 : 피보나치 수 5
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;  cin >> n;


    int fn_1 = 0, fn = 1;
    int fx;

    for (int i = 0; i <= n; i++)
    {
        if (n == 0)
        {
            cout << 0;
            return 0;
        }
        else if (n == 1)
        {
            cout << 1;
            return 0;
        }
        else if (i != 0 && i != 1)
        {
            fx = fn;
            fn += fn_1;
            fn_1 = fx;
        }
    }

    cout << fn;

    return 0;
}
*/

/*
// BAEKJOON 2231번 : 분해합
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);

    int N;
    std::cin >> N;

    for (int i = 1; i < N; i++)
    {
        int currentNum = i;
        int digitSum = 0;

        while (currentNum > 0)
        {
            digitSum += currentNum % 10;
            currentNum /= 10;
        }

        int sum = i + digitSum;

        if (sum == N) {
            cout << i;
            return 0;
        }
    }

    cout << 0;

    return 0;
}
*/