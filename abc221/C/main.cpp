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

void solve(string N)
{
	sort(N.begin(), N.end());
	int ans = 0;
	do
	{
		for (int i = 1; i < N.length(); i++)
		{
			string astr = "", bstr = "";
			astr = N.substr(0, i);
			bstr = N.substr(i);
			// cout << astr << ", " << bstr << endl;
			int a = atoi(astr.c_str());
			int b = atoi(bstr.c_str());
			if (a == 0 || b == 0)
			{
				continue;
			}
			ans = max(a * b, ans);
		}
	} while (next_permutation(N.begin(), N.end()));
	cout << ans << endl;
}

// Generated by 2.8.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
	string N;
	std::cin >> N;
	solve(N);
	return 0;
}
