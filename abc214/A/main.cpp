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

void solve(long long N)
{
    int ans = 4;
    if (N <= 125)
    {
        ans = 4;
    }
    else if (N <= 211)
    {
        ans = 6;
    }
    else
    {
        ans = 8;
    }
    cout << ans << endl;
}

// Generated by 2.6.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    long long N;
    std::scanf("%lld", &N);
    solve(N);
    return 0;
}
