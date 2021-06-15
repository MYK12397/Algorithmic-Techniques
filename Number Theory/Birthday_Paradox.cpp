#include<iostream>
using namespace std;
int main()
{
	float p=1; //p denotes prob of 2 ppl having different birthday
	// same birthday = 1-p
	float num =365;
	float den= 365;
	int ppl=0;
	while(p>0.5){
		p*=(num/den);
		num--;
		ppl++;
		
		cout<<"Probability is "<<(1-p)<<" and people are "<<ppl<<endl;	}
		
	return 0;
}
