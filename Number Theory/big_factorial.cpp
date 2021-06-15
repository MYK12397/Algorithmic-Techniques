#include<iostream>
using namespace std;
void multiply(int *a, int &n, int no){
	int carry=0;
	for(int i=0;i<n;i++){
		int prod= a[i]*no+carry;
		a[i]=prod%10;
		carry= prod/10;
	}
	while(carry){
		a[n]=carry%10;
		carry/=10;
		n++;
	}
}
void big_factorial(int n){
	int *a= new int[1000]{0};
	a[0]=1;
	int num=1;
	for(int i=2;i<=n;i++)
	multiply(a,num,i);
	
	for(int i=n-1;i>=0;i--)
	cout<<a[i];

cout<<"\n";
}
int main(){
	big_factorial(100);
	return 0;
	
}
	

