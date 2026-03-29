#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (auto &x : a) cin >> x;

    vector<pair<long long,int>> v;
    for (int i = 0; i < n; i++)
        v.push_back({a[i], i});

    sort(v.begin(), v.end());

    vector<int> ans(n);

    long long sum = 0;
    int i = 0;

    while (i < n) {
        sum += v[i].first;
        int j = i + 1;

        while (j < n && sum >= v[j].first) {
            sum += v[j].first;
            j++;
        }

        for (int k = i; k < j; k++) {
            ans[v[k].second] = j - 1;
        }

        i = j;
    }

    for (int x : ans) cout << x << " ";
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
