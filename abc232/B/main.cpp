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
	if (S.size() == 1 && T.size() == 1)
	{
		cout << YES << endl;
		return;
	}

	for (int i = 1; i < S.size(); i++)
	{
		// cout << S[i] - S[i - 1] << ":" << T[i] - T[i - 1] << endl;
		ll snum = S[i] - S[i - 1];
		ll tnum = T[i] - T[i - 1];

		if (snum != tnum && abs(snum - tnum) != 26)
		{
			cout << NO << endl;
			return;
		}
	}
	cout << YES << endl;
}

// Generated by 2.11.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
	std::string S;
	std::cin >> S;
	std::string T;
	std::cin >> T;
	solve(S, T);
	return 0;
}
