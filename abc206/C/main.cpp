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

map<ll, ll> B;

void solve(long long N, std::vector<long long> A)
{
	ll ans = 0;
	sort(A.begin(), A.end());
	for (int i = 0; i < A.size(); i++)
	{
		B[A[i]]++;
	}

	A.erase(std::unique(A.begin(), A.end()), A.end());

	ans = N * (N - 1) / 2;

	for (int i = 0; i < A.size(); i++)
	{
		if (B[A[i]] >= 2)
		{
			ans -= B[A[i]] * (B[A[i]] - 1) / 2;
		}
	}

	cout << ans << endl;
}

// Generated by 2.4.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
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
