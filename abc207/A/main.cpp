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

void solve(long long A, long long B, long long C)
{
	int AB, BC, CA;
	AB = A + B;
	BC = C + B;
	CA = A + C;

	if (AB >= BC && AB >= CA)
	{
		cout << AB << endl;
	}
	else if (BC >= AB && BC >= CA)
	{
		cout << BC << endl;
	}
	else
	{
		cout << CA << endl;
	}
}

// Generated by 2.5.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
	long long A;
	std::scanf("%lld", &A);
	long long B;
	std::scanf("%lld", &B);
	long long C;
	std::scanf("%lld", &C);
	solve(A, B, C);
	return 0;
}
