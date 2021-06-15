#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 7; //cin>>n;
	int a[] = {2, 6, 4, 3, 6, 8, 9};
	// rep(i,0,n)cin>>a[i];

	int seg = INT_MAX, i = 0, j = n - 1;
	int s = 20, x = 0, l = 0, r;
	// for (r = 0; r < n; r++) {
	// 	x += a[r];
	// 	while (x  > s)x -= a[l++];
	// 	// seg += r - l + 1;

	// 	// cout << l << " " << r << " " << seg << " " << x << endl;
	// 	seg = max(seg, r - l + 1); //for maximum subarray/segment size

	// }

//for min segment satisfying sum condition
	for (r = 0; r < n; r++) {
		x += a[r];
		while (x - a[l]  >= s)x -= a[l++];

		if (x >= s)
			seg = min(seg, r - l + 1);

	}

	cout << seg;

	return 0;
}
