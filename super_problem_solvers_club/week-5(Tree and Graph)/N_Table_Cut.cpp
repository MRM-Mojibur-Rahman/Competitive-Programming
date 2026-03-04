#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 0));
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            cnt += a[i][j];
        }
    }
    vector<vector<int>> col(n, vector<int>(m, 0));
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == n - 1)
                col[i][j] = a[i][j];
            else
                col[i][j] = col[i + 1][j] + a[i][j];
        }
    }
    // for (int i = 0; i < m; i++)
    // {
    //     cout<<col[0][i]<<" ";
    // }

    ll i = 0, j = 0;
    ll side = 0;
    string ans;

    while (j < m && i< n)
    {
        int right = col[i][j];
        if (side + right <= cnt / 2)
        {
            ans += 'R';
            side += right;
            j++;
        }
        else 
        {
            i++;
            ans += 'D';
        }
        
    }
        while (i<n)
    {
        ans+='D';
        i++;
    }
    while (j<m)
    {
        ans+='R';
        j++;
    }

    
    
    cout << (cnt - side) * side << endl;
    cout << ans << endl;
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
