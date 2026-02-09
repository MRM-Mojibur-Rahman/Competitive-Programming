#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n + 2, 0);
    vector<bool> vis(n + 2, true);
    int color = 1;
    for (int i = 2; i <= n + 2; i++)
    {
        if (vis[i])
            for (int j = i + i; j <= n + 2; j += i)
            {
                vis[j] = false;
            }
    }

    for (int i = 2; i < n + 2; i++)
    {
        a[i] = (vis[i]) ? 1 : 2;
    }
    if(n>2) cout<<2<<endl;
    else cout<<1<<endl;
    for (int i = 2; i < n + 2; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
