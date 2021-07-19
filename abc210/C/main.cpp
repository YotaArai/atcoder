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

map<ll, ll> mp;

void solve(long long N, long long K, std::vector<long long> c)
{

	for (int i = 0; i < K; i++)
	{
		mp[c[i]]++;
	}
	ll ans = mp.size();

	for (int i = K; i < N; i++)
	{
		mp[c[i]]++;
		mp[c[i - K]]--;
		if (mp[c[i - K]] == 0)
		{
			mp.erase(c[i - K]);
		}
		ans = max(ans, (ll)mp.size());
	}

	cout << ans << endl;
}

// Generated by 2.5.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
	long long N;
	std::scanf("%lld", &N);
	long long K;
	std::scanf("%lld", &K);
	std::vector<long long> c(N);
	for (int i = 0; i < N; i++)
	{
		std::scanf("%lld", &c[i]);
	}
	solve(N, K, std::move(c));
	return 0;
}
