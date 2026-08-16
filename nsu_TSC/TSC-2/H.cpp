#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        char w;
        cin >> w;
        if (w == 'W')
            a[i] = -1;
        else
        {
            ll f;
            cin >> f;
            a[i] = f;
            
        }
    }
    vector<priority_queue<ll>> byProfit(n + 1);
    ll cnt = 0;
    priority_queue<ll> pq, tem;
    for (ll i = n; i >= 1; i--)
    {
        if (a[i] == -1)
        {
            byProfit[i] = pq;
            pq = {};
            cnt = 0;
        }
        else
        {

            cnt++;
            pq.push(a[i] * cnt);

        }
    }

    ll ans = 0;
    pq = {};
    cnt = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (a[i] == -1)
        {
            cnt++;
            tem = pq;
            ll how = cnt;
            ll onthis = 0;
            ll dis = byProfit[i].size();
            while (how)
            {
                if (tem.empty())
                {
                    if (!byProfit[i].empty())
                    {
                        onthis += byProfit[i].top();
                        byProfit[i].pop();
                    }
                }
                else if (byProfit[i].empty())
                {
                    if (!tem.empty())
                    {
                        onthis += tem.top() * (dis + 1);

                        tem.pop();
                    }
                }
                else
                {

                    if (tem.top() * (dis + 1) > byProfit[i].top())
                    {
                        onthis += tem.top() * (dis + 1);
                        tem.pop();
                    }
                    else
                    {
                        onthis += byProfit[i].top();
                        byProfit[i].pop();
                    }
                }

                how--;
            }
            ans += onthis;
        }
        else
            pq.push(a[i]);
    }

    cout << ans << endl;
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
