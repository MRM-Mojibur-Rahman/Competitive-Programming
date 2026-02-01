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
    ll sum = 0, ans = INT_MAX;
    while (r < n)
    {
        sum += v[r];

        while (sum >= s)
        {
            ans = min(ans, r - l + 1); /*in this problem i did not find any idea then i try 
            just hatandazi then it get ac so the problem was i have to short the lentght of sum so to do that 
            i have to see how long */
            /* i Have to think more carefully and think everything my mind is still slow*/
            sum -= v[l];
            l++;
        }
        r++;
    }
    if (ans != INT_MAX)
        cout << ans << endl;
    else
        cout << -1 << endl;

    return 0;
}
