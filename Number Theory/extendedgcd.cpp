#include<iostream>
using namespace std;
#define ll long long
#define pb push_back
const int  mod =(int)1e9+7;
/*int d,x,y;
void extendedeuclid(int a,int b){
	if(b==0){
		d=a;
		x=1;
		y=0;
	}
	else{
		extendedeuclid(b,a%b);
		int tmp=x;
		x=y;
		y=temp-(a/b)*y;
	}
}*/
class triplet{
	public:
		ll gcd;
		ll x;
		ll y;
};
triplet extengcd(ll a, ll b){
	if(b==0){
		triplet myans;
		myans.gcd=a;
		myans.x=1;
		myans.y=0;
		return myans;
	}
	triplet res= extengcd(b,a%b);
	triplet ans;
	ans.gcd=res.gcd;
	ans.x=res.y;
	ans.y= res.x-((a/b)*res.y);
	return ans;
	
}

ll inverse(ll a,ll m){
	ll x= extengcd(a,m).x;
	
	return (x%m+m)%m;
}

int main() 
{ 
ios::sync_with_stdio(false);
cin.tie(0);
   int t; scanf("%d",&t);
    while(t--)
	{
		 ll a,b,d; cin>>a>>b>>d;
 ll g= __gcd(a,b);
 a/=g;
 b/=g;
 d/=g;
 if(d%g){
 
 cout<<0<<endl;
continue;
}
 if(d==0){
 
 cout<<1<<endl;
 continue;
}
  
  ll y1= ((d%a)*inverse(b,a))%a;
  ll fval=d/b;
  if(d<y1*b){
  
  cout<<0<<endl;
  continue;
}
  ll n= (fval-y1)/a;
  cout<<n+1<<endl;}



return 0;
}
    

