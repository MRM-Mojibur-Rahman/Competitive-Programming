#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n,x,y;cin>>n>>x>>y;
    x--,y--;
    vector<int>a(n,-1);
    for (int i = y; i <=x; i++)
    {
        a[i]=1;
    }
    for(auto it:a)cout<<it<<" ";
    cout<<endl;
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
