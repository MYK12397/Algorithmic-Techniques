#include<bits/stdc++.h>
using namespace std;
void maxsumsubarray(int a[], int n) {
	int l = 0, r = 0, sum = 0;
	int ans = a[0];
	while (l < n) {

		if (sum > 0)
			sum += a[l];
		else
			sum = a[l];

		ans = max(ans, sum);
		// cout << sum << " " << ans << endl;
		l++;
	}
	// rep(i, 0, n) {
	//     if (sum > 0) {
	//         sum += a[i];

	//     }
	//     else
	//         sum = a[i];

	//     ans = max(ans, sum);
	//     cout << sum << " " << ans << endl;
	// }
	cout << ans;

}
int main()
{
	int a[] = { -2, -5, 6, -2, -3, 1, 5, -6};
	int n = sizeof(a) / sizeof(a[0]);
	maxsumsubarray(a, n);

	return 0;
}