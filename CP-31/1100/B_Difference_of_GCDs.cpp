#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int>a(n+1,0);
    a[1]=l;
    for (int i = 2; i <= n; i++)
    {
       int mul = r/i;
       if(mul*i > r || mul*i < l) {
        cout<<"NO\n";
        return;
       }
       a[i] = mul*i;
    }
    cout<<"YES\n";
    for(int i = 1 ; i<=n ; i++) cout<<a[i]<<" ";
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
