#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> adj[n + 1], bd(n + 1, 0), a(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        int p, c;
        cin >> p >> c;
        if(p!=-1)
        adj[p].push_back(i);
        if (c == 1)
        {
            a[i] = 1;
            bd[p]++;
        }
    }
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        if ((int)adj[i].size() == bd[i] && a[i] == 1)
            ans.push_back(i);
    }
    if(ans.size()!=0)
    for(auto it:ans) cout<<it<<" ";
    else cout<<-1<<endl;

    return 0;
}
