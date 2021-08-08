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

void solve(long long N, std::vector<long long> A)
{
	vector<ll> B;
	copy(A.begin(), A.end(), back_inserter(B));
	sort(B.rbegin(), B.rend());
	ll booby_score = B[1];
	// cout << booby_score << endl;
	cout << find(A.begin(), A.end(), booby_score) - A.begin() + 1 << endl;
}

// Generated by 2.6.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
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