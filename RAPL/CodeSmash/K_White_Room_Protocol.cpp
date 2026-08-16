#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{

    ll n, m, a, b;
    cin >> n >> m >> a >> b;

    vector<pair<ll, ll>> adj_list[n + 1];
    vector<vector<ll>> dis(2, vector<ll>(n + 1, LONG_MAX));
    auto dijkstra = [&](ll si, ll sw, ll x)
    {
        queue<pair<ll, ll>> nodes;
        nodes.push({si, sw});
        dis[x][si] = 0;
        while (!nodes.empty())
        {
            pair<ll, ll> par = nodes.front();
            nodes.pop();
            ll par_ind = par.first;
            ll par_w = par.second;
            for (auto it : adj_list[par_ind])
            {
                ll child_ind = it.first;
                ll child_w = it.second;
                if (child_w + par_w < dis[x][child_ind])
                {
                    dis[x][child_ind] = child_w + par_w;
                    nodes.push({child_ind, dis[x][child_ind]});
                }
            }
        }
    };

    for (ll i = 0; i < m; i++)
    {
        ll a, b, w = 1;
        cin >> a >> b;
        adj_list[a].push_back({b, w});
        adj_list[b].push_back({a, w});
    }
    dijkstra(a, 0, 0);
    dijkstra(b, 0, 1);
    ll mn = LONG_MAX;
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (dis[0][i] == dis[1][i])
         ans++;
    }
    //    mn = min(dis[0][i],mn);ans
    // for (ll i = 1; i <= n; i++)
    // {
    //     if (dis[0][i] == dis[1][i] && dis[0][i]==mn)
    //         ans++;
    // }
    cout<<ans<<endl;


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
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// void solve()
// {

//     ll n, m, a, b;
//     cin >> n >> m >> a >> b;

//     vector<vector<ll>> levelA(2, vector<ll>(n + 1));
//     vector<vector<ll>> adj_list(n + 1);

//     for (ll i = 0; i < m; i++)
//     {
//         ll x, y;
//         cin >> x >> y;
//         adj_list[x].push_back(y);
//         adj_list[y].push_back(x);
//     }
//     auto bfs = [&](ll src, ll x)
//     {
//         vector<bool> vis(n + 1, false);
//         queue<ll> q;
//         q.push(src);
//         vis[src] = true;
//         levelA[x][src] = 1;
//         while (!q.empty())
//         {
//             ll par = q.front();
//             q.pop();
//             for (auto child : adj_list[par])
//             {
//                 if (!vis[child])
//                 {
//                     q.push(child);
//                     vis[child] = true;
//                     levelA[x][child] = levelA[x][par] + 1;
//                 }
//             }
//         }
//     };

//     bfs(a, 0);
//     bfs(b, 1);
//     ll mn = ll_MAX;
//     for (ll i = 1; i <= n; i++)
//     {
//         if (levelA[0][i] == levelA[1][i] && i!=a && i!=b)
//         {

//            mn= min(mn, levelA[0][i]);
//         }
//     }
//     ll ans = 0;

//     for (ll i = 1; i <= n; i++)
//     {
//         if (levelA[0][i] == mn && levelA[1][i] == mn && i!=a && i!=b)
//         {
//             ans++;
//         }
//     }

//     cout << ans << endl;
// }

// ll main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
