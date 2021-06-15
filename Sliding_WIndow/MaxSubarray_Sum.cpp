#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sum = 0, i = 0, j = 0;
	int a[] = {1, 3, 5, 7, 8, 9};

	int n = sizeof(a) / sizeof(a[0]);
	int mx = INT_MIN, k = 3; //k is subarray size.

	while (j < n) {
		sum += a[j]; // s will store current window sum.

		if (j - i + 1 < k)//window size is less than k. so, we increase jth index.
			j++;
		else if (j - i + 1 == k)//if window size is equal to k so this is what we need.
		{

			mx = max(mx, sum); // mx will store maximm sum subarray

			sum -= a[i];   // sliding the window & removing ith element

			i++; j++;    // to reach next subarray, increase both i & j.

		}
	}
	cout << mx; // print the maximum sum.

	return 0;
}