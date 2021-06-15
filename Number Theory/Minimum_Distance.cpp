#include <bits/stdc++.h>
using namespace std;
#define FORE(i,a,b) for(int i=(a);i<=(b);++i)
#define REPE(i,n)  for(int i=0;i<=(n);++i)
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  for(int i=0;i<(n);++i)
#define FORR(x,arr) for(auto& x:arr)
#define SZ(a) int((a).size())
#define LL long long
#define ld long double
#define point pair<double,double>
#define F first
#define S second
const int MOD = 1000000007;
double minDis(point A, point B, point E) {
	point AB;
	AB.F = B.F - A.F;
	AB.S = B.S - B.F;
	point BE;
	BE.F = E.F - B.F;
	BE.S = E.S - B.S;

	point AE;
	AE.F = E.F - A.F;
	AE.S = E.S - A.S;
	double AB_BE, AB_AE;
	AB_BE = (AB.F * BE.F + AB.S * BE.S);
	AB_AE = (AB.F * AE.F + AB.S * AE.S);
	double ans = 0;
	if (AB_BE > 0) {
		double y = E.S - B.S;
		double x = E.F - B.F;
		ans = sqrt(x * x + y * y);
	}
	else if (AB_AE < 0) {
		double y = E.S - B.S;
		double x = E.F - B.F;
		ans = sqrt(x * x + y * y);
	}
	else {
		double x1 = AB.F, y1 = AB.S, x2 = AE.F, y2 = AE.S;
		double mod = sqrt(x1 * x1 + y1 * y1);
		ans = abs(x1 * y2 - y1 * x2) / mod;

	}
	return ans;
}
void sol() {
	point A = make_pair(0, 0);
	point B = make_pair(2, 0);
	point E = make_pair(1, 1);
	cout << minDis(A, B, E);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t = 1;
	//cin >> t;
	while (t--) {
		sol();
	}

	return 0;
}