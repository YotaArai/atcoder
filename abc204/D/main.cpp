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
#include <climits>
using namespace std;
typedef long long ll;

ll dp[101][200001];

template <typename T>
bool chmin(T &a, const T &b)
{
	if (a > b)
	{
		a = b;
		return true;
	}
	return false;
}

void solve(long long N, std::vector<int> T)
{

	for (int i = 0; i < N + 1; i++)
	{
		for (int j = 0; j < 100001; j++)
		{
			dp[i][j] = INT_MAX;
		}
	}

	dp[0][0] = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 100001; j++)
		{
			chmin(dp[i + 1][j + T[i]], dp[i][j]);
			chmin(dp[i + 1][j], dp[i][j] + T[i]);
		}
	}

	ll ans = INT_MAX;
	for (ll j = 0; j < 100001; j++)
	{
		chmin(ans, max(j, dp[N][j]));
	}
	cout << ans << endl;
}

// Generated by 2.3.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
	long long N;
	std::scanf("%lld", &N);
	std::vector<int> T(N);
	for (int i = 0; i < N; i++)
	{
		std::scanf("%d", &T[i]);
	}
	solve(N, std::move(T));
	return 0;
}
