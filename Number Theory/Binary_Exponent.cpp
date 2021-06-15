#include<iostream>
using namespace std;
#define ll long long int
ll binpow(ll a, ll b){
	if(b==0)return 1;
	//ll res=binpow(a,(b-1)/2);
	ll cnt= binpow(a,b/2);
	if(b%2)
	return cnt*cnt*a;
	else
	return cnt*cnt;
}
ll binpow2(ll a,ll b,ll n){
	ll res=1;
	while(b>0){
		if(b&1)
		res=res*a%n;
		a=a*a%n;
		b>>=1;
	}
	return res;
}
int car(int n,int k){
	if(k>n)
	swap(n,k);
	ll ans=1;
	for(int i=0;i<k;i++)
		ans*=(n-i);
		
	
	return ans;
}
int main()
{
	ll a, b, n;int t;
	/*for(cin>>t;t;t--){
	cin>>a>>b>>n;
	ll k=binpow2(a,b,n);
	if(t==0)break;
	cout<<k<<"\n";
	
}*/
cin>>n; cout<<car(n,4)<<"\n";
	return 0;
}
