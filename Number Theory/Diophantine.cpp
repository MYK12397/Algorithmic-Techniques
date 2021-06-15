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
ll gcd(ll a, ll b){ll temp;while (b > 0){temp = a%b;a = b;b = temp;} return a;}
ll lcm(ll a, ll b){return a*b/gcd(a,b);}
ll fpow(ll  b, ll exp, ll mod){if(exp == 0) return 1;ll t = fpow(b,exp/2,mod);if(exp&1) return t*t%mod*b%mod;return t*t%mod;}
ll divmod(ll i, ll j, ll mod){i%=mod,j%=mod;return i*fpow(j,mod-2,mod)%mod;}
// --clock function
clock_t time_p=clock();
void TimeTaken()
{
    time_p=clock()-time_p;
    cerr<<"Completion time : "<<(float)(time_p)/CLOCKS_PER_SEC<<"\n";
}
int exgcd(int a,int b,int &x,int &y){
	if(b==0){
		x=0;
		y=1;
		return a;
	}
	int x1,y1;
	int d= exgcd(b,a%b, x1, y1);
	x=y1;
	y=x1- y1*(a/b);
	return d;
}
void onesolution(int a,int b,int n){
	for(int i=0;i*a<=n;i++){
		if((n-(i*a))%b==0){
			cout<<"x = "<<i<<", y = "<<(n-(i*a))/b;
			return;
		}
	}
}
bool find_any_solution(int a,int b, int c,int &x0,int &y0,int &g){
	g= exgcd(abs(a),abs(b),x0,y0);
	if(c%g)
	return false;
	
	x0*=c/g;
	y0*=c/g;
	if(a<0)x0=-x0;
	if(b<0)y0=-y0;
	
	return true;
}

void sol(){
	int a,b,n; cin>>a>>b>>n;
onesolution(a,b,n);

}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  //cin >> t;
  while(t--)
    sol();

  return 0;
}

