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

void solve(long long N, long long M, std::vector<long long> A, std::vector<long long> B)
{
	sort(A.begin(), A.end());
	ll ans = INT_MAX;

	for (int i = 0; i < M; i++)
	{
		int idx = lower_bound(A.begin(), A.end(), B[i]) - A.begin();
		ll another = INT_MAX;
		if (idx != 0)
		{
			another = abs(B[i] - A[idx - 1]);
		}
		ll target = min(abs(B[i] - A[idx]), another);
		ans = min(ans, target);
	}

	cout << ans << endl;
}

// Generated by 2.6.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
	long long N;
	std::scanf("%lld", &N);
	long long M;
	std::scanf("%lld", &M);
	std::vector<long long> A(N);
	for (int i = 0; i < N; i++)
	{
		std::scanf("%lld", &A[i]);
	}
	std::vector<long long> B(M);
	for (int i = 0; i < M; i++)
	{
		std::scanf("%lld", &B[i]);
	}
	solve(N, M, std::move(A), std::move(B));
	return 0;
}