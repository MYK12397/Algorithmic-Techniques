#include<bits/stdc++.h>
#define all(k) k.begin(),k.end()
#define rep(i,a,n) for(int i=a;i<n;i++)
#define per(i,a,n) for(int i=n-1;i>=a;i--)
#define repk(i,a,n) for(int i=a;i<=(n);i++)
using namespace std;
int CountAnagram(string txt, string pat) {
    unordered_map<int, int> m;
    rep(i, 0, pat.length()) {
        m[pat[i]]++;
    }
    int k = pat.length(), cnt;
    cnt = m.size();
    int i = 0, j = 0, ans = 0;
    int n = txt.length();
    while (j < n) {
        if (m.find(txt[j]) != m.end()) {
            m[txt[j]]--;

            if (m[txt[j]] == 0)
                cnt--;
        }
        if (j - i + 1 < k)
            j++;
        else {
            if (cnt == 0)
                ans++;
            if (m.find(txt[i]) != m.end()) {
                m[txt[i]]++;

                if (m[txt[i]] == 1)
                    cnt++;
            }

            i++; j++;
        }

    }
    return ans;
}


int32_t main() {
    string txt = "forxxorfxdofr";
    string pat = "for";

    cout << CountAnagram(txt, pat);

    return 0;
}