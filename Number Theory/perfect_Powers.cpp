#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
#define ll long long
#define max 1e18
#define N 1000005
#define loop(i,a,b) for(int i=(a);i<(b);++i)

vector<ll> powers;
set<ll> squares;
set<ll> s;
void powerPreComputation(){
	loop(i,2,N){
		squares.insert(i*i);
		if(squares.find(i)!=squares.end())
		continue;
		ll cnt=i;
		while(i*i<=max/cnt){
			cnt*=(i*i);
			s.insert(cnt);
			
		}
	}
	for(auto x: s)
	powers.push_back(x);
}
ll perfectpower(ll L, ll R){
	 long int perfectSquares = floor(sqrtl(R)) -  
                            floor(sqrtl(L - 1)); 
  
    // calculate upper value of R  
    // in vector using binary search 
    long int high = (upper_bound(powers.begin(),  
            powers.end(), R) - powers.begin()); 
  
    // calculate lower value of L  
    // in vector using binary search 
    long int low = (lower_bound(powers.begin(), 
            powers.end(), L) - powers.begin()); 
  
    // add into final answer 
    perfectSquares += (high - low); 
  
    return perfectSquares; 
}
int main(){
	ll L;
	ll R;
	int t; cin>>t;
	while(t--){
	cin>>L>>R;	
	cout<<"Numbers of perfect powers: "<<perfectpower(L, R)<<endl;
}
	return 0;
}
