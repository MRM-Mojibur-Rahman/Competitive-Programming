#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &it : a)
        cin >> it;
    vector<bool> valo(n, true);
    int ans = 0;
    int hi = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] + a[i + 1] == 7 || a[i]==a[i+1])
        {
            
            if (!valo[i])
                hi++;
            if (!valo[i + 1])
                hi++;
            valo[i] = false;
            valo[i + 1] = false;
        
        }
    }
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if(!valo[i]) cnt++;

    }

    cnt -= hi * 3;
    cout << cnt / 2 << endl;
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
