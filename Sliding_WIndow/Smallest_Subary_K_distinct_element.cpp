#include<bits/stdc++.h>
using namespace std;
void distinct_el(int a[], int n, int k) {
	map<int, int> cnt;
	set<int> s;
	int l = 0, r = 0, i = 0, j = 0, ans = INT_MAX;
	while (l < n) {
		while (r < n && s.size() < k) {
			s.insert(a[r]);
			cnt[a[r]]++;
			r++;
		}
		if (s.size() >= k) {
			if (r - l < ans) {
				ans = r - l; i = l;
				j = r;
			}
		}
		if (cnt[a[l]] == 1)
			s.erase(a[l]);

		cnt[a[l]]--;
		l++;

	}
	cout << ans << endl;//subarray size
	cout << i << " " << j - 1; //subarray range
}
int main() {
	int a[] = {2, 2, 5, 5, 8, 20}, k = 2;
	int n = sizeof(a) / sizeof(a[0]);
	distinct_el(a, n, k);

	return 0;
}