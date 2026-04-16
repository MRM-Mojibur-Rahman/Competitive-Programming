#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.first == b.first) 
    {
        return a.second > b.second;
    }
    else return a.first < b.first;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i]%=k;
        if(a[i]==0) cout<<i<<" ";
    }
    vector<pair<int,int>>health;
    for (int i = 1; i <=n; i++)
    {
        if(a[i]!=0)
        health.push_back({a[i],i});
    }
    sort(health.rbegin(),health.rend(),cmp);
  
    for ( auto [x,y]:health)
    {
       cout<<y<<" ";
    }
    

    //{ vector<pair<int, int>> b;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (a[i] % k == 0)
    //     {
    //         b.push_back({a[i], i});
    //         a[i] = -1;
    //     }
    //     else{
    //         a[i]%=k;
    //     }
    // }
    // sort(b.rbegin(), b.rend());
    // for (auto it : b)
    //     cout << it.second << " ";
    // b.clear();
    // for (int i = 1; i <= n; i++)
    // {
    //     if (a[i] != -1)
    //     {
    //         b.push_back({a[i], i});
    //         a[i] = -1;
    //     }
    // }
    // sort(b.rbegin(), b.rend());
    // for (auto it : b)
    //     cout << it.second << " ";}
    
    
    cout << endl;
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
