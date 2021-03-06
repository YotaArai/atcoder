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

void solve(long long N, long long K)
{
    long long sum = 0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= K; j++)
        {
            sum += 100 * i + j;
        }
    }
    cout << sum << endl;
}

// Generated by 2.3.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    long long N;
    std::scanf("%lld", &N);
    long long K;
    std::scanf("%lld", &K);
    solve(N, K);
    return 0;
}
