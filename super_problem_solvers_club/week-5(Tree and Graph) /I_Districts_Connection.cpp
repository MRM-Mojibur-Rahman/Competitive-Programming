#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1, 0);
    for (int i = 1; i <=n; i++)
    {
        cin>>a[i];
    }
    
    bool is = true;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] != a[i - 1])
            is = false;
    }
    if (is)
    {
        cout << "NO\n";
        return;
    }
    cout<<"YES\n";
    int city = -1;
    for (int i = 2; i <=n; i++)
    {
        if(a[1]!=a[i])
        {
            cout<<1<<" "<<i<<endl;
            city = i;
        }
    
    }
    for (int i = 2; i <=n; i++)
    {
        if(a[i]==a[1])
        {
            cout<<city<<" "<<i<<endl;
        }
    }
    
    
    
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
