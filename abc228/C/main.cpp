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

const string YES = "Yes";
const string NO = "No";

void solve(long long N, long long K, vector<ll> P)
{
	vector<ll> Q = P;
	sort(begin(Q), end(Q), greater<>());
	for (int i = 0; i < N; i++)
	{
		cout << (P[i] + 300 >= Q[K - 1] ? YES : NO) << endl;
	}
}

// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
	long long N;
	std::scanf("%lld", &N);
	long long K;
	std::scanf("%lld", &K);
	vector<ll> P(N);
	for (int i = 0; i < N; i++)
	{
		ll sum = 0;
		for (int j = 0; j < 3; j++)
		{
			ll p = 0;
			std::scanf("%lld", &p);
			sum += p;
		}
		P[i] = sum;
	}
	solve(N, K, std::move(P));
	return 0;
}
