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
#define pi pair<int,int>
#define vc vector<char>
#define vs vector<string>
#define vi vector<int>
#define vvi vector<vi>
#define vc vector<char>
#define vpi vector<pi>
#define vvc vector<vc>
#define mi map<int,int>
#define mset map<string,set<char>>
#define umap unordered_map
#define int int64_t
using namespace std;
#define fi first
#define se second
struct stack {
	vi s, smin = {LLONG_MAX}, smax = {LLONG_MIN};

	void push(int x) {
		s.pb(x);
		smin.pb(::min(smin.back(), x));
		smax.pb(::max(smax.back(), x));
	}

	int pop() {
		int res = s.back();
		s.pop_back();
		smin.pop_back();
		smax.pop_back();
		return res;
	}

	bool empty() {
		return s.empty();
	}

	int min() {
		return smin.back();
	}

	int max() {
		return smax.back();
	}
};
::stack s1, s2;
void add(int x) {
	s2.push(x);
}
void remove() {
	if (s1.empty()) {
		while (!s2.empty())
			s1.push(s2.pop());
	}
	s1.pop();
}
int k;
bool good() {
	int mn = min(s1.min(), s2.min());
	int mx = max(s1.max(), s2.max());
	return mx - mn <= k;
}
void sol() {
	int n;
	cin >> n >> k;
	vi a(n);
	rep(i, 0, n)cin >> a[i];


	int res = 0;
	int l = 0, x = 0;
	rep(r, 0, n) {
		add(a[r]);
		while (!good())
		{
			remove();
			l++;
		}

		res += (r - l + 1);
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