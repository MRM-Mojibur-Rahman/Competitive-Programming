#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;
#define pii pair<ll,ll>
#define vpii vector<pii>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c, l;
    cin >> n >> c >> l;

    vpii y;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        y.push_back({a,b});
    }

    ll t1 = LLONG_MAX,t2 = LLONG_MIN;
    for(int i = 0; i < n; i++) {
        auto [x,v] = y[i];
        ll tmp1 = (-c -x) / v;
        ll tmp2 = (c - x + v - 1) / v;
        t1 = min(tmp1,t1);
        t2 = max(tmp2, t2);

        tmp1 = (-c -x + l) / v;
        tmp2 = (c - x + l + v - 1) / v;
        t1 = min(tmp1,t1);
        t2 = max(tmp2, t2);
    }

    for(int i = 0; i < n - 1; i++) {
        auto [x1,v1] = y[i];
        auto [x2,v2] = y[i + 1];

        ll delx = x1 - x2;
        ll delv = v1 - v2;

        ll tmp1 = (-c -delx) / delv;
        ll tmp2 = (c - delx + delv - 1) / delv;
        t1 = min(tmp1,t1);
        t2 = max(tmp2, t2);
    }

    cout << t1 << " " << t2 nl;
}