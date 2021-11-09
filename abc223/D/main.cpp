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

void solve(long long N, long long M, std::vector<long long> A, std::vector<long long> B)
{
	vector<int> indeg(N);
	vector<vector<int>> out(N);
	priority_queue<int, vector<int>, greater<int>> heap;
	for (int i = 0; i < M; ++i)
	{
		indeg[B[i] - 1] += 1;
		out[A[i] - 1].push_back(B[i] - 1);
	}

	for (int i = 0; i < N; ++i)
	{
		if (indeg[i] == 0)
		{
			heap.push(i);
		}
	}
	vector<int> ans;
	// ans.reserve(N);
	while (!heap.empty())
	{
		int i = heap.top();
		heap.pop();
		ans.push_back(i);
		for (int j : out[i])
		{
			indeg[j] -= 1;
			if (indeg[j] == 0)
			{
				heap.push(j);
			}
		}
	}

	if (size(ans) != N)
	{
		cout << -1 << '\n';
	}
	else
	{
		for (int i = 0; i < N; ++i)
		{
			cout << ans[i] + 1 << (i + 1 == N ? '\n' : ' ');
		}
	}
}

// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
	long long N;
	std::scanf("%lld", &N);
	long long M;
	std::scanf("%lld", &M);
	std::vector<long long> A(M);
	std::vector<long long> B(M);
	for (int i = 0; i < M; i++)
	{
		std::scanf("%lld", &A[i]);
		std::scanf("%lld", &B[i]);
	}
	solve(N, M, std::move(A), std::move(B));
	return 0;
}