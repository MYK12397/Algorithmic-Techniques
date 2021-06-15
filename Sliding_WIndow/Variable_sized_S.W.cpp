#include<bits/stdc++.h>
using namespace std;
//Variable sized Sliding Window

void find_range_maxsum(int a[], int n, int k) {
	int l = 0, r = 0, ans = 0, sum = 0;
	int i = 0, j = 0;
	while (l < n) {
		while (r < n && sum + a[r] <= k) {
			sum += a[r++];

		}
		if (sum > ans) {
			ans = sum;
			i = l;
			j = r;
		}
		sum -= a[l++];

	}
	cout << i << " " << j - 1;
}

int main()
{
	int a[] = {2, 4, 5, 7, 8, 20}, s = 30;
	int p1, p2, n = sizeof(a) / sizeof(a[0]);
	find_range_maxsum(a, n, s);

	return 0;
}