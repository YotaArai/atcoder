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


void solve(long long N, std::vector<long long> A, long long Q, std::vector<long long> B){

}

// Generated by 2.3.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &A[i]);
    }
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> B(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &B[i]);
    }
    solve(N, std::move(A), Q, std::move(B));
    return 0;
}
