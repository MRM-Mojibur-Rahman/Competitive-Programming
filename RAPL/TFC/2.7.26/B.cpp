#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> totalScoreP(n, 0);
    vector<vector<ll>> totalScoreC(n);
    vector<ll> base(m), perfor(m);
    for (auto &it : base)
        cin >> it;
    for (auto &it : perfor)
        cin >> it;
    vector<vector<ll>> score(m, vector<ll>(n));
    vector<ll> parti(m, 0);
    for (ll i = 0; i < m; i++)
    {
        ll cnt = 0;
        for (ll j = 0; j < n; j++)
        {
            cin >> score[i][j];
            cnt = max(score[i][j], cnt);
        }
        parti[i] = cnt;
    }
    vector<ll> x(n), y(n);
    for (auto &it : x)
        cin >> it;
    for (auto &it : y)
        cin >> it;

    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (score[i][j] != -1)
            {
                if (parti[i] == 0)
                    totalScoreC[j].push_back(base[i]);
                else
                    totalScoreC[j].push_back(base[i] + floor(((double)perfor[i] * ((double)score[i][j] / parti[i]))));
            }
            else
                totalScoreC[j].push_back(0);
        }
    }

    for (ll i = 0; i < n; i++)
    {
        totalScoreP[i] += y[i] + floor((double)x[i] / 60);
    }

    vector<ll> contestSore(n, 0);
    for (ll i = 0; i < n; i++)
    {
        sort(totalScoreC[i].rbegin(), totalScoreC[i].rend());
        ll cnt = 0;
        for (ll j = 0; j < k; j++)
        {
            cnt += totalScoreC[i][j];
        }
        // cout<<cnt<<endl;
        contestSore[i] = cnt/k ;
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (contestSore[i] >= 50 && totalScoreP[i] >= 50)
        {
            if (contestSore[i] >= 60 || totalScoreP[i] >= 60)
            {
                ans++;
            }
        }
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
