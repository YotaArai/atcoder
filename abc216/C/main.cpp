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

void solve(long long N)
{
	vector<string> ans;

	while (true)
	{
		int mod = N % 2;
		N = N / 2;

		// cout << mod << ", " << N << endl;

		if (N <= 0)
		{
			break;
		}

		if (mod == 1)
		{
			ans.push_back("BA");
		}
		else
		{
			ans.push_back("B");
		}
	}

	cout << "A";
	for (int i = ans.size() - 1; i >= 0; --i)
	{
		cout << ans[i];
	}
	cout << endl;
}

// Generated by 2.8.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
	long long N;
	std::scanf("%lld", &N);
	solve(N);
	return 0;
}
