#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mxn = 1e5+5;
set<int>adj[mxn];
vector<int>par,child;
void dfs(int node ,int parent,int p_c)
{
    if(p_c==1) par.push_back(node);
    else child.push_back(node);
    for(auto it: adj[node])
    {
        if(it==parent) continue;
        dfs(it , node,!p_c);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin>>n;
    for (int i = 1; i < n; i++)
    {
        int x,y;cin>>x>>y;
        adj[x].insert(y);
        adj[y].insert(x);
    }

    dfs(1,0,1);
    ll a = par.size();
ll b = child.size();

cout << a * b - (n - 1) << endl;

    

    return 0;
}
