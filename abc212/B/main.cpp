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

// Generated by 2.6.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int ctoi(char c)
{
    if (c >= '0' && c <= '9')
    {
        return c - '0';
    }
    return 0;
}

int main()
{
    std::string S;
    std::cin >> S;

    // for (int i = 0; i < S.size(); i++)
    // {
    //     cout << S[i] << endl;
    // }

    if (S[0] == S[1] && S[1] == S[2] && S[2] == S[3] && S[3] == S[0])
    {
        cout << "Weak" << endl;
        return 0;
    }

    int first_num = ctoi(S[0]);
    int target_num;
    for (int i = 1; i < S.size(); i++)
    {
        first_num++;
        if (first_num >= 10)
        {
            first_num = 0;
        }
        target_num = ctoi(S[i]);
        // cout << << target_num << endl;
        if (target_num != first_num)
        {
            cout << "Strong" << endl;
            return 0;
        }
    }
    cout << "Weak" << endl;

    return 0;
}
