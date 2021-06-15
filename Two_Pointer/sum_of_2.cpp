#include<iostream>
using namespace std;
bool twopointer(int a[], int s, int n) {
	int l = 0, r = n - 1;
	int x;
	while (l < r) {
		if (a[l] + a[r] == s)
			return 1;
		else if (a[l] + a[r] > s)
			r--;
		else
			l++;
	}
	return 0;
}
int main()
{
	int a[] = {2, 4, 5, 7, 8, 20}, s = 11;
	int  n = sizeof(a) / sizeof(a[0]);
	cout << twopointer(a, s, n);
	return 0;
}