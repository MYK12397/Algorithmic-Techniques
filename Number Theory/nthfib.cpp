#include<iostream>
#include<cmath>
using namespace std;
#define ll long long
#define mod 1000000007
void multi(ll a[2][2],ll m[2][2]){
	ll fval= a[0][0]*m[0][0]+a[0][1]*m[1][0];
	ll sval= a[0][0]*m[0][1]+a[0][1]*m[1][1];
	ll tval= a[1][0]*m[0][0]+a[1][1]*m[1][0];
	ll ftval= a[1][0]*m[0][1]+a[1][1]*m[1][1];
	
	a[0][0]=fval;
	a[0][1]=sval;
	a[1][0]=tval;
	a[1][1]=ftval;
}
void power(ll a[2][2],ll n){
	if(n==0||n==1)
	return ;
	power(a,n/2);
	multi(a,a);
	if(n%2){
		ll m[2][2]={{1,1},{1,0}};
		multi(a,m);
	}
}
ll fib(ll n)
{
	ll a[2][2]={{1,1},{1,0}};
	if(n==0)
	return 0;
	power(a,n-1);
	return a[0][0];
}
int fibformula(int n){
	double phi=(1+sqrt(5))/2;
	return pow(phi,n)/sqrt(5);
}
int main(){
	ll n; scanf("%lld",&n);
	cout<<fib(n)%mod;
	return 0;
}
