#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;cin>>n;
    int msb = 31-__builtin_clz(n-1);
    vector<int>a(n);
    a[(1<<msb)] = (1<<msb);
    for (int i = 0,j=(1<<msb)-1; i < (1<<msb); i++,j--)
    {
        a[i]=j;
    }
    for (int i = (1<<msb)+1; i < n; i++)
    {
       a[i]=i;
    }
    for(auto it:a) cout<<it<<" ";
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
