#include<bits/stdc++.h>
#define inf  (int)1e18
#define MOD 1000000007
#define all(k) k.begin(),k.end()
#define rep(i,a,n) for(int i=a;i<n;i++)
#define per(i,a,n) for(int i=n-1;i>=a;i--)
#define repk(i,a,n) for(int i=a;i<=(n);i++)
#define pb push_back
#define ppb pop_back
#define eb emplace_back
#define mp make_pair
#define ll  long long
#define pi pair<int,int>
#define pl pair<ll,ll>
#define vc vector<char>
#define vl vector<ll>
#define vvl vector<vl>
#define vi vector<int>
#define vvi vector<vi>
#define vc vector<char>
#define vs vector<string>
#define vpi vector<pi>
#define vpl vector<pl>
#define vvc vector<vc>
#define mi map<int,int>
#define ml map<ll,ll>
#define umap unordered_map<int, int>
// #define int int64_t
using namespace std;

void sol() {
    int a[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int k = 2, i = 0, j = 0;
    int n = sizeof(a) / sizeof(a[0]);
    list<int> l;
    vector<int> res;
    while (j < n) {
//calculations
        while (l.size() > 0 && l.back() < a[j])
            l.pop_back();

        l.push_back(a[j]);

        if (j - i + 1 < k)
            j++;
        if (j - i + 1 == k) {

            res.push_back(l.front());

            if (a[i] == l.front())
                l.pop_front();

            i++; j++;
        }
    }
    for (auto a : res)
        cout << a << " ";
}


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;


    // for (cin >> t; t; t--)
    sol();


    return 0;
}