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
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;

const long long MOD = 998244353;
using mint = modint998244353;

mint dp[100010][10];

void solve(long long N, std::vector<long long> A)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			dp[i][j] = 0;
		}
	}

	dp[0][A[0]] = 1;

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			dp[i + 1][(j + A[i + 1]) % 10] += dp[i][j];
			dp[i + 1][(j * A[i + 1]) % 10] += dp[i][j];
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << dp[N - 1][i].val() << endl;
	}
}

// Generated by 2.8.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
	long long N;
	std::scanf("%lld", &N);
	std::vector<long long> A(N);
	for (int i = 0; i < N; i++)
	{
		std::scanf("%lld", &A[i]);
	}
	solve(N, std::move(A));
	return 0;
}