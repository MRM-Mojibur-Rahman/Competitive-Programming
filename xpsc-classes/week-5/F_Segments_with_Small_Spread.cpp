#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, s;
    cin >> n >> s;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll l = 0, r = 0;
    ll ans = 0;
    multiset<ll> ml;
    while (r < n)
    {
        ml.insert(v[r]);
        while (l < n && (*ml.rbegin() - *ml.begin()) > s)
        {
            ml.erase(ml.find(v[l]));
            l++;
        }
        ans += r - l + 1;
        r++;
    }
    cout << ans << endl;
    map<char,int>ci;
    ci.find('c')->first;

    return 0;
}
