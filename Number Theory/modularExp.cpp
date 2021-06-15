#include<iostream>
using namespace std;
#define mod 1000000007
int modularExp(int x, int n){
	int res=1;
	while(n>0){
		if(n%2==1)
		res=(res*x)%mod;
		
		x=(x*x)%mod;
		n/=2;
	}
	return res;
}
int main(){
	int k=modularExp(2,3);
	cout<<k;
	return 0;
}
