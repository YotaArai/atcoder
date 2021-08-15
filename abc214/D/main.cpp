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
#include <atcoder/dsu>
using namespace std;
typedef long long ll;

void solve(long long N, std::vector<long long> u, std::vector<long long> v, std::vector<long long> w)
{
	vector<tuple<ll, ll, ll>> edge(N - 1);
	for (int i = 0; i < N - 1; i++)
	{
		edge[i] = {w[i], u[i] - 1, v[i] - 1};
	}
	sort(edge.begin(), edge.end());
	atcoder::dsu dsu(N);
	long long ans = 0;
	for (auto [edge_w, edge_u, edge_v] : edge)
	{
		ans += edge_w * dsu.size(edge_u) * dsu.size(edge_v);
		dsu.merge(edge_u, edge_v);
	}
	cout << ans << endl;
}

// Generated by 2.6.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
	long long N;
	std::scanf("%lld", &N);
	std::vector<long long> u(N - 1);
	std::vector<long long> v(N - 1);
	std::vector<long long> w(N - 1);
	for (int i = 0; i < N - 1; i++)
	{
		std::scanf("%lld", &u[i]);
		std::scanf("%lld", &v[i]);
		std::scanf("%lld", &w[i]);
	}
	solve(N, std::move(u), std::move(v), std::move(w));
	return 0;
}
