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

void solve(long long N, std::vector<long long> S)
{
	ll correctNum = 0;
	vector<ll> vec(N, false);
	for (int a = 1; a <= 1000; a++)
	{
		for (int b = 1; b <= 1000; b++)
		{
			for (int i = 0; i <= N; i++)
			{
				if (S[i] == 4 * a * b + 3 * (a + b) && !vec[i])
				{
					correctNum++;
					vec[i] = true;
				}
			}
		}
	}

	cout << N - correctNum << endl;
}

// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
	long long N;
	std::scanf("%lld", &N);
	std::vector<long long> S(N);
	for (int i = 0; i < N; i++)
	{
		std::scanf("%lld", &S[i]);
	}
	solve(N, std::move(S));
	return 0;
}