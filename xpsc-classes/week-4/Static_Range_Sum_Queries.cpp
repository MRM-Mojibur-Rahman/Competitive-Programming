#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<ll> v(n+1,0), pre(n+1, 0);
    for (int i = 1; i <=n; i++)
    {
        cin >> v[i];
        if (i == 1)
            pre[i] = v[i];
        else
            pre[i] = v[i] + pre[i - 1];
    }
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        cout<<pre[r]-pre[l-1]<<endl;

        
    }

    return 0;
}
