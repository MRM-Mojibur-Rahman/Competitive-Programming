#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> v;
ll n;
ll callOpt(int x) {
    ll res = 0;
    ll k = n - (n / 2);
    for(int i = n - 1; i >= n / 2; i++) {
        res+= (x - v[i]) * k;
        x -= v[i];
        k--;
    }
    return res;
}

void solve() {
    int n;
    cin >> n;

    v.resize(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(),v.end());
    cout << callOpt(12) << endl;    // callOpt();

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
