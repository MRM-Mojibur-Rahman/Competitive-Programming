#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;cin>>n;set<int>a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;a.insert(x);
    }
    cout<<a.size()<<endl;

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
