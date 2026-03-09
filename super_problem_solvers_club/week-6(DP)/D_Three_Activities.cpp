#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n), b(n), c(n);
    vector<pair<pair<int,int>,int>>mx;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = {x, i};
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b[i] = {x, i};
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        c[i] = {x, i};
    }
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    sort(c.rbegin(), c.rend());
    for (int i = 0; i < 3; i++)
    {
        mx.push_back({a[i],1});
        mx.push_back({b[i],2});
        mx.push_back({c[i],3});
    }
    sort(mx.rbegin(), mx.rend());
    ll ans = 0;
    set<int> s,tsk;
    // ans += mx[0].first.first;
    // s.insert(mx[0].first.second);
    // tsk.insert(mx[0].second);
    // int x = 2;
    for (int i = 0; i < 9; i++)
    {   
        // if(tsk.size()==3) break;
        
        // if (s.find(mx[i].first.second) == s.end() && tsk.find(mx[i].second)==tsk.end())
        // {
            cout<<mx[i].first.first<<" "<<mx[i].first.second<<" "<<mx[i].second<<endl;
            // ans += mx[i].first.first;
            // s.insert(mx[i].first.second);
            // tsk.insert(mx[i].second);

            
            
            
        // }
    }
    
    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
