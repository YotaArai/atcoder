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


void solve(long long X){
int a;
	if(0 <= X && X < 40){
		a = 40 - X;
	}else if(40 <= X && X < 70){
		a = 70 - X;
	}else if(70 <= X && X < 90){
		a = 90 - X;
	}else {
		cout << "expert" << endl;
		return;
	}
	cout << a << endl;
}

// Generated by 2.8.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
				long long X;
				std::scanf("%lld", &X);
				solve(X);
				return 0;
}
