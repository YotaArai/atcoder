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

void solve(std::string S)
{
	sort(S.begin(), S.end());
	ll i = 0;
	do
	{
		i++;
		// cout << S << endl;

	} while (next_permutation(S.begin(), S.end()));

	cout << i << endl;
}

// Generated by 2.9.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
	std::string S;
	std::cin >> S;
	solve(S);
	return 0;
}
