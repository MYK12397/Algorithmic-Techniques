#include<iostream>
#include<vector>
using namespace std;
#define nn 500021
#define pb push_back
#define mod 1000000007
typedef long long ll;


vector<int>* sieve(){
	bool isp[nn];
	vector<int>* primes= new vector<int>();
	for(int i=2;i<=nn;i++)
	isp[i]=true;
	
	for(int i=2;i*i<=nn;i++){
		if(isp[i]){
			for(int j=i*i;j<=nn;j+=i)
			isp[j]=false;
		}
	}
	
	primes->pb(2);
	for(int i=3;i<=nn;i+=2){
		if(isp[i])
		primes->pb(i);
	}
	return primes;
}
ll divisor(int n, vector<int> * &primes){
	ll res= 1;
	for(int i=0;primes->at(i)<=n;i++){
		int k= primes->at(i);
		ll cnt=0;
		while((n/k!=0)){
			cnt=(cnt+(n/k))%mod;
			k=k*primes->at(i);
		}
		res= (res*((cnt+1)%mod))%mod;
	}
	return res;
}
int main(){
	vector<int>* primes= sieve();
	int t; scanf("%d",&t);
	while(t--){int n; scanf("%d",&n);
	
		cout<<divisor(n,primes)<<"\n";
	}
	return 0;
}
 
