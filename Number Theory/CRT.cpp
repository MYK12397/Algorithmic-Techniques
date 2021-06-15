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
#define MOD 1000000007ll
#define Pi 3.14159
// for input-output
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define setBit(S, j) (S |= (1 << j))
#define clearBit(S, j) (S &= ~(1 << j))
#define toggleBit(S, j) (S ^= (1 << j))

//#define IN(x,n)   for(int e=0;e<n;e++){ll y;cin>>y;x.pb(y);}

#define print(x)    for(auto it:x) cout<<it<<' '; cout<<endl;
#define printPI(x)  for(auto it:x) cout<<it.F<<' '<<it.S<<'\t';  cout<<endl;

#define ll long long
#define PI pair<int,int>
#define PL pair<ll,ll>
#define VI vector<int>
#define VL vector<ll>
#define VVI vector<VI>
#define VVL vector<VL>
#define VVVI vector<VVI>
#define VVVL vector<VVL>
#define VPI vector<PI>
#define VPL vector<PL>
#define PB push_back
#define PPB pop_back
#define EB emplace_back
#define MP make_pair
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
    cerr<<"\nCompletion time : "<<(float)(time_p)/CLOCKS_PER_SEC<<"\n";
}
//NAIVE APPROACH
int findX(int num[],int rem[],int k){
	int x=1;
	while(true){int j;
		for(j=0;j<k;j++)
			if(x%num[j]!=rem[j])
			break;
			
			if(j==k)
			return x;
			
			x++;
		
	}
	return x;
}
//FAST APPROACH USING MODULAR MULTIPLICATIVE INVERSE
int inv(int a,int m){
	int temp=m, q,t ,u=0,v=1;
	if(m==1)
	return 0;
	//apply extended euclidean algo
	while(a>1){
		//q is quotient
		q=a/m;
		t=m;
		//m is remainder now, process same as euclid algo
		m=a%m;
		a=t;
		t=u;
		u=v-q*u;
		v=t;
		
	}
	if(v<0)v+=temp;
	return v;
}
int findX2(int num[],int rem[],int k){
	int prod=1;//product
	for(int i=0;i<k;i++)
	prod*=num[i];
	int res=0;
	for(int i=0;i<k;i++){
		int pp=prod/num[i];
		res+=rem[i]*inv(pp,num[i])*pp;
	}
	return res%prod;
}
void sol(){
int n=2,k;//cin>>n;
int num[]={4,5};
int rem[]={6,7};
//for(int i=0;i<n;i++)cin>>num[i];

    cout << "x is " << findX2(num, rem, n);
	TimeTaken();
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

