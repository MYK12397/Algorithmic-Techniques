#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s = "aabacbebebe";
	int k = 3, i = 0, j = 0;
	int n = s.length(), mx = INT_MIN;
	unordered_map<char, int> m;

	while (j < n) {
		m[s[j]]++;
		if (m.size() == k) {
			mx = max(mx, j - i + 1);
		}
		else if (m.size() > k) {
			while (m.size() > k) {
				m[s[i]]--;
				if (m[s[i]] == 0)
					m.erase(s[i]);
				i++;
			}
		}
		j++;

	}
	cout << mx << "\n";

	return 0;
}