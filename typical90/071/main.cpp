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


void solve(long long N, long long M, long long K, std::vector<long long> A, std::vector<long long> B){

}

// Generated by 2.8.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
				long long N;
				std::scanf("%lld", &N);
				long long M;
				std::scanf("%lld", &M);
				long long K;
				std::scanf("%lld", &K);
				std::vector<long long> A(M);
				std::vector<long long> B(M);
				for(int i = 0 ; i < M ; i++){
								std::scanf("%lld", &A[i]);
								std::scanf("%lld", &B[i]);
				}
				solve(N, M, K, std::move(A), std::move(B));
				return 0;
}
