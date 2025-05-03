#include <iostream>
#include <algorithm>

using namespace std;

/*
// BAKEJOON 2935¹ø : ¼ÒÀ½
#include <string>

string ReturnAddResult(string A, string B, int A_size, int B_size)
{
	string result;

	if (A_size > B_size)
	{
		result = A;
		result.replace(A_size - B_size, B_size, B);
	}
	else if (B_size > A_size)
	{
		result = B;
		result.replace(B_size - A_size, A_size, A);
	}
	else
	{
		result += "2";
		for (int i = 0; i < A_size - 1; ++i)
		{
			result += "0";
		}
	}

	return result;
}

string ReturnMultiResult(string A, string B, int A_size, int B_size)
{
	string result;

	if (A_size > B_size)
	{
		result = A;
		for (int i = 0; i < B_size - 1; ++i)
		{
			result.append("0");
		}
	}
	else
	{
		result = B;
		for (int i = 0; i < A_size - 1; ++i)
		{
			result.append("0");
		}
	}

	return result;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string A, B;
	string op;
	
	string result;

	getline(cin, A);
	getline(cin, op);
	getline(cin, B);
	
	if (op == "+")
	{
		result = ReturnAddResult(A, B, A.size(), B.size());
	}
	else if (op == "*")
	{
		result = ReturnMultiResult(A, B, A.size(), B.size());
	}

	cout << result;
	

	return 0;
}
*/