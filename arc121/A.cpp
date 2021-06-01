/**
 * 
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

typedef long long ll;
using P = pair<ll, ll>;

ll N, x[2000001], y[2000001], dis, xmax, xmin, ymax, ymin;
vector<P> xvec, yvec;
map<P, ll> ansmap;
vector<ll> ansvec;

int main()
{
	cin >> N;
	for (ll i = 0; i < N; i++)
	{
		cin >> x[i] >> y[i];
		xvec.push_back({x[i], i});
		yvec.push_back({y[i], i});
	}

	sort(xvec.begin(), xvec.end());
	sort(yvec.begin(), yvec.end());

	ansmap[{xvec[0].second, xvec[N - 1].second}] = max(ansmap[{xvec[0].second, xvec[N - 1].second}], abs(xvec[0].first - xvec[N - 1].first));
	ansmap[{xvec[0].second, xvec[N - 2].second}] = max(ansmap[{xvec[0].second, xvec[N - 2].second}], abs(xvec[0].first - xvec[N - 2].first));
	ansmap[{xvec[1].second, xvec[N - 1].second}] = max(ansmap[{xvec[1].second, xvec[N - 1].second}], abs(xvec[1].first - xvec[N - 1].first));

	ansmap[{yvec[0].second, yvec[N - 1].second}] = max(ansmap[{yvec[0].second, yvec[N - 1].second}], abs(yvec[0].first - yvec[N - 1].first));
	ansmap[{yvec[0].second, yvec[N - 2].second}] = max(ansmap[{yvec[0].second, yvec[N - 2].second}], abs(yvec[0].first - yvec[N - 2].first));
	ansmap[{yvec[1].second, yvec[N - 1].second}] = max(ansmap[{yvec[1].second, yvec[N - 1].second}], abs(yvec[1].first - yvec[N - 1].first));

	for (auto target : ansmap)
	{
		ansvec.push_back(target.second);
	}

	sort(ansvec.rbegin(), ansvec.rend());

	cout << ansvec[1];

	return 0;
}