#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[] = {4, 1, 1, 1, 2, 3, 5};
	int i = 0, j = 0, k = 5, s = 0;
	int n = sizeof(a) / sizeof(a[0]);
	int mx = 0;
	while (j < n) {
		s += a[j];
		if (s < k)
			j++;
		else if (s == k)
		{	mx = max(mx, j - i + 1);
			j++;
		}
		else {
			while (s > k) { //remove leftmost elements until sum equals or less than k.
				s -= a[i];
				i++; // increment i to the right.
			}
			j++;// increment j to include rightmost elements.
		}
	}
	cout << mx;

	return 0;
}