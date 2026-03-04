#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mxn = 3e5+10;
vector<int>adj[mxn];
vector<int>op(mxn,0);
string a;

void dfs(int root)
{
    if(adj[root][0])
    {
        int ch = adj[root][0];
        if(a[root-1]!='L')
        op[ch] = op[root]+1;
        else op[ch]=op[root];
        dfs(ch);
    }
    if(adj[root][1])
    {
        int ch = adj[root][1];
        if(a[root-1]!='R')
        op[ch] = op[root]+1;
        else op[ch]=op[root];
        dfs(ch);
    }

}
void solve()
{
    int n; cin>>n;
    cin>>a;
    for (int i = 1; i <=n; i++)
    {
        adj[i].clear();
        op[i]=0;
    }
    
    for (int i = 1; i <= n; i++)
    {
        int l , r ;cin>>l>>r;
        adj[i].push_back(l);
        adj[i].push_back(r);
    }
    dfs(1);
    int ans = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        if(adj[i][0]==0&&adj[i][1]==0) ans = min(ans,op[i]);
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
