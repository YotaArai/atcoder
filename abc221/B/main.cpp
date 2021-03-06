#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cassert>
using namespace std;
typedef long long ll;

const string YES = "Yes";
const string NO = "No";

void solve(std::string S, std::string T)
{
	if (S == T)
	{
		cout << YES << endl;
		return;
	}

	for (int i = 0; i < S.length() - 1; i++)
	{
		string Sd = S;
		for (int j = 0; j < S.length(); j++)
		{
			if (i == j)
			{
				Sd[j] = S[j + 1];
			}
			else if (i + 1 == j)
			{
				Sd[j] = S[j - 1];
			}
		}
		// cout << Sd << endl;
		if (Sd == T)
		{
			cout << YES << endl;
			return;
		}
	}

	cout << NO << endl;
}

// Generated by 2.8.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
	std::string S;
	std::cin >> S;
	std::string T;
	std::cin >> T;
	solve(S, T);
	return 0;
}
