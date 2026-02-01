#include <bits/stdc++.h>
using namespace std;
#define lli __int128
#define ll long long
#define MAX LLONG_MAX

bool calcRes(const vector<ll> &a, const vector<ll> &c,ll h, ll n, ll turn) {
    lli res = 0;
    for(int i = 0; i < n; i++) {
        lli moves = ((turn - 1) / c[i]) + 1;
        res+= moves * a[i];
        if(res >= h) return true;
    }
    return false;
}

lli findTurn(const vector<ll> &a, const vector<ll> &c,ll h, ll n) {
    lli l = 0, r = MAX;
    lli res = 0;
    while(l <= r) {
        lli mid = l + (r - l) / 2;
        if(calcRes(a,c,h,n,mid)) {
            r = mid - 1;
            res = mid;
        } else {
            l = mid + 1;
        }
    }
    return res;
}

void solve() {
    ll h, n;
    cin >> h >> n;

    vector<ll> a(n), c(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> c[i];

    cout << calcRes(a,c,h,n,18);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
