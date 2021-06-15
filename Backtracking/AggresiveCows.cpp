#include<bits/stdc++.h>
using namespace std;
bool check(int cows, long long x[], int n, long long mid) {
	int cnt = 1;
	long long last_pos = x[0];


	for (int i = 1; i < n; i++) {
		if (x[i] - last_pos >= mid) {
			last_pos = x[i];
			cnt++;
		}


		if (cnt == cows)
			return true;
	}

	return false;

}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, c; cin >> n >> c;
		long long x[n];
		for (int i = 0; i < n; i++)cin >> x[i];
		sort(x, x + n);
		long long start = 0, end = x[n - 1] - x[0];
		long long ans = -1;
		while (start <= end) {
			long long mid = start + (end - start) / 2;
			if (check(c, x, n, mid)) {
				ans = mid;
				start = mid + 1;

			}
			else
				end = mid - 1;
		}
		cout << ans << endl;
	}
	return 0;
}