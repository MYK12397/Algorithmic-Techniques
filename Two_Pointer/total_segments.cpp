#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("fast-math")
#pragma GCC optimize("trapv")
#pragma GCC target("sse4")

#include<bits/stdc++.h>
#define inf  (int)1e18
#define MOD 998244353
#define all(k) k.begin(),k.end()
#define rep(i,a,n) for(int i=a;i<n;i++)
#define per(i,a,n) for(int i=n-1;i>=a;i--)
#define repk(i,a,n) for(int i=a;i<=(n);i++)
#define pb push_back
#define ppb pop_back
#define eb emplace_back
#define ll  long long
#define ull unsigned long long

#define vi vector<int>
#define vvi vector<vi>

#define int int64_t
using namespace std;



void sol() {
	int n, s; cin >> n >> s;
	vi a(n);
	rep(i, 0, n)cin >> a[i];
	int res = 0;
	int l = 0, x = 0;
	rep(r, 0, n) {
		x += a[r];
		while (x - a[l] >= s)x -= a[l++];

		if (x >= s)
			res += l + 1;

	}

	cout << res;


}


int32_t main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);



	int t = 1;


	// for (cin >> t; t; t--)
	sol();


	return 0;
}