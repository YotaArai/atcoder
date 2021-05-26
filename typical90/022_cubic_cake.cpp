/**
 * gcd, 最小公倍数
 */


#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

typedef long long ll;

ll A, B, C, cnt, min_length, piece_size;


ll gcd_arr(vector<ll> &a){
  int n = a.size();
  for(int i=n-2; i>=0; i--){
    a[i] = gcd(a[i], a[i+1]);
  }
  return a.front();
}

int main(){
	
	cin >> A >> B >> C;

  min_length = min(A, B);
  min_length = min(min_length, C);

  vector<ll> arr = {A, B, C};
  piece_size = gcd_arr(arr);

  cout << A / piece_size + B / piece_size + C / piece_size - 3;
	
	return 0;
}