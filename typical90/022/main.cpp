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
#include <numeric>
using namespace std;
typedef long long ll;

ll gcd_arr(vector<ll> &a)
{
    int n = a.size();
    for (int i = n - 2; i >= 0; i--)
    {
        a[i] = gcd(a[i], a[i + 1]);
    }
    return a.front();
}

void solve(long long A, long long B, long long C)
{
    ll min_length, piece_size;
    min_length = min(A, B);
    min_length = min(min_length, C);

    vector<ll> arr = {A, B, C};
    piece_size = gcd_arr(arr);

    cout << A / piece_size + B / piece_size + C / piece_size - 3 << endl;
}

// Generated by 2.3.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
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
