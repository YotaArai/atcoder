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

void solve(long long N, long long K, long long A)
{
	ll ans = 0;
	ans = (K % N + A - 1) % N;
	if (ans == 0)
	{
		ans = N;
	}
	cout << ans << endl;
}

// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
	long long N;
	std::scanf("%lld", &N);
	long long K;
	std::scanf("%lld", &K);
	long long A;
	std::scanf("%lld", &A);
	solve(N, K, A);
	return 0;
}
