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

void solve(long long N, long long K, std::vector<long long> A, std::vector<long long> B)
{
    vector<pair<long long, long long>> vec;
    for (ll i = 0; i < N; i++)
    {
        vec.push_back({A[i], B[i]});
    }
    sort(vec.begin(), vec.end());

    ll position = 0;
    for (ll i = 0; i < N; i++)
    {
        if (K - (vec[i].first - position) < 0)
        {
            break;
        }
        else
        {
            K -= vec[i].first - position;
            position = vec[i].first;
            K += vec[i].second;
        }
    }
    cout << position + K << endl;
}

// Generated by 2.3.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    long long N;
    std::scanf("%lld", &N);
    long long K;
    std::scanf("%lld", &K);
    std::vector<long long> A(N);
    std::vector<long long> B(N);
    for (int i = 0; i < N; i++)
    {
        std::scanf("%lld", &A[i]);
        std::scanf("%lld", &B[i]);
    }
    solve(N, K, std::move(A), std::move(B));
    return 0;
}