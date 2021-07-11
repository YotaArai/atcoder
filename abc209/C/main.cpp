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

const long long MOD = 1000000007;

void solve(long long N, std::vector<long long> C)
{
	ll ans = 1, target;
	sort(C.begin(), C.end());
	for (int i = 0; i < N; i++)
	{

		target = C[i] - i;
		if (target < 0)
		{
			target = 0;
		}

		ans = ans * target;
		ans = ans % MOD;
	}

	cout << ans << endl;
}

// Generated by 2.5.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
	long long N;
	std::scanf("%lld", &N);
	std::vector<long long> C(N);
	for (int i = 0; i < N; i++)
	{
		std::scanf("%lld", &C[i]);
	}
	solve(N, std::move(C));
	return 0;
}
