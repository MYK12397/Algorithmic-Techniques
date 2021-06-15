#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define  vi vector<int>

void sol() {
	int n, m; cin >> n >> m;
	vi a(n), b(m);
	for (int &k : a)cin >> k;

	for (int &k : b)cin >> k;

	vi c(n + m);
	int i = 0, j = 0;
	while (i < a.size() || j < b.size()) {
		if (j == b.size() || (i < a.size() && a[i] < b[j]))
		{
			c[i + j] = a[i];
			i++;
		}
		else {
			c[i + j] = b[j];
			j++;
		}
	}

	for (auto k : c)
		cout << k << " ";

}


int32_t main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;


	//for (cin >> t; t; t--)
	sol();


	return 0;
}