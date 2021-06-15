#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("fast-math")
#pragma GCC optimize("trapv")
#pragma GCC target("sse4")

#include<bits/stdc++.h>
#define inf  (int)1e18
#define MOD 1000000007
#define all(k) k.begin(),k.end()
#define rep(i,a,n) for(int i=a;i<n;i++)
#define per(i,a,n) for(int i=n-1;i>=a;i--)
#define repk(i,a,n) for(int i=a;i<=(n);i++)
#define pb push_back
#define ppb pop_back
#define eb emplace_back
#define mp make_pair
#define ll  long long
#define ull unsigned long long
#define pi pair<int,int>
#define vc vector<char>
#define vs vector<string>
#define vi vector<int>
#define vvi vector<vi>
#define vc vector<char>
#define vpi vector<pi>
#define vvc vector<vc>
#define mi map<int,int>
#define umap unordered_map
#define int int64_t
using namespace std;
#define fi first
#define se second

void sol() {
	int n, m; cin >> n >> m;
	vi a(n), b(m);
	rep(i, 0, n)cin >> a[i];
	rep(i, 0, m)cin >> b[i];

	int i = 0, j = 0;
	int res = 0;
	while (i < a.size() && j < b.size()) {
		int cnt1 = 0, cnt2 = 0;
		int x = a[i];

		while (j < b.size() && b[j] < x)j++;

		while (i < a.size() && a[i] == x)i++, cnt1++;

		while (j < b.size() && b[j] == x)j++, cnt2++;

		res += (cnt1 * cnt2);

	}

	cout << res;

}


int32_t main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;


	//for (cin >> t; t; t--)
	sol();


	return 0;
}