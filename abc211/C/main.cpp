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

const long long MOD = 1000000007;
ll dp[10010][9];

void solve(std::string S)
{
    string name = "chokudai";

    for (int i = 0; i <= S.size(); i++)
    {
        dp[i][0] = 1;
    }
    // for (int j = 1; j <= name.size(); j++)
    // {
    //     dp[0][j] = 0;
    // }

    for (int i = 0; i < S.size(); i++)
    {
        for (int j = 0; j <= name.size(); j++)
        {
            if (name[j] == S[i])
            {
                dp[i + 1][j + 1] = (dp[i][j + 1] + dp[i][j]) % MOD;
            }
            else
            {
                dp[i + 1][j + 1] = dp[i][j + 1];
            }
        }
    }

    cout << dp[S.size()][8] << endl;
}

// Generated by 2.6.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
