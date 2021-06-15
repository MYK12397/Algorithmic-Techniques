#include<cstdio>
#include<set>
#include<vector>
#include<algorithm>
#include<queue>
#include<map>
#include<cstdlib>
#include<time.h>
#include<string>
#include<stack>
#include<cmath>
#include<iostream>
#include<cstring>
#include<complex>
#include<tr1/unordered_set>
#include<tr1/unordered_map>
// Useful constants
#define INF  (int)1e9
#define EPS   1e-9
#define MOD 1000000007
#define Pi 3.14159
// for input-output
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// iteration macros: have advantage of auto-casting and not recomputing arguments
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define setBit(S, j) (S |= (1 << j))
#define clearBit(S, j) (S &= ~(1 << j))
#define toggleBit(S, j) (S ^= (1 << j))
// input macro
#define IN(x,n)   for(int e=0;e<n;e++){ll y;cin>>y;x.pb(y);}
//output macro
#define print(x)    for(auto it:x) cout<<it<<' '; cout<<endl;
#define printPI(x)  for(auto it:x) cout<<it.F<<' '<<it.S<<'\t';  cout<<endl;
// shortcut for data type
#define ll long long
#define ui unsigned int
#define PI pair<int,int>
#define PL pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<VI>
#define vvl vector<VL>
#define vvvi vector<VVI>
#define vvvl vector<VVL>
#define vpi vector<PI>
#define vpl vector<PL>
#define pb push_back
#define ppb pop_back
#define eb emplace_back
#define mp make_pair
#define F first
#define S second
#define uset unordered_set
#define umap unordered_map
#define dbg(x, y) cout << x << " = " << y << endl

//namespace
using namespace std;

//const
const int Ntest = 1e5 + 5;

//useful function
ll gcd(ll a, ll b) {ll temp; while (b > 0) {temp = a % b; a = b; b = temp;} return a;}
ll lcm(ll a, ll b) {return a * b / gcd(a, b);}
ll fpow(ll  b, ll exp, ll mod) {if (exp == 0) return 1; ll t = fpow(b, exp / 2, mod); if (exp & 1) return t * t % mod * b % mod; return t * t % mod;}
ll divmod(ll i, ll j, ll mod) {i %= mod, j %= mod; return i * fpow(j, mod - 2, mod) % mod;}
// --clock function
clock_t time_p = clock();
void TimeTaken()
{
	time_p = clock() - time_p;
	cerr << "Completion time : " << (float)(time_p) / CLOCKS_PER_SEC << "\n";
}
class Point {
public:
	double x, y;
};
class Polygon {
public:
	Point* Points;
	Polygon(int npoints) {
		Points = new Point[npoints];
	}
};
double area(Polygon P, int n) {

	double fArea = 0;
	for (int i = 1; i < n - 1; i++) {
		double x1 = P.Points[i].x - P.Points[0].x;
		double y1 = P.Points[i].y - P.Points[0].y;
		double x2 = P.Points[i + 1].x - P.Points[0].x;
		double y2 = P.Points[i + 1].y - P.Points[0].y;
		double cross_P = x1 * y2 - x2 * y1;
		fArea += cross_P;

	}
	return abs(fArea / 2);
}
void sol() {
	int n; cin >> n;
	Polygon P(n);
	rep(i, 0, n) {
		cin >> P.Points[i].x;
		cin >> P.Points[i].y;
	}
	cout << area(P, n);

}

int main() {
	// ios_base::sync_with_stdio(false);
	// cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t = 1;
	// cin >> t;
	while (t--)
		sol();

	return 0;
}