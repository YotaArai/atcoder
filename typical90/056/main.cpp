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

const string NO = "Impossible";

void solve(long long N, long long S, std::vector<long long> A, std::vector<long long> B){

}

// Generated by 2.8.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
				long long N;
				std::scanf("%lld", &N);
				long long S;
				std::scanf("%lld", &S);
				std::vector<long long> A(N);
				std::vector<long long> B(N);
				for(int i = 0 ; i < N ; i++){
								std::scanf("%lld", &A[i]);
								std::scanf("%lld", &B[i]);
				}
				solve(N, S, std::move(A), std::move(B));
				return 0;
}
