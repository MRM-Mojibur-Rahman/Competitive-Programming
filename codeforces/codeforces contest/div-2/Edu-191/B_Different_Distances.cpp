#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(4 * n);
    int cnt = 0;

    if(n==2)
    {
        cout<<"1 2 1 2 2 1 1 2\n"<<endl; return;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= 4; k++)
        {
            a[cnt++] = i;
        }
    }
    cnt = 4*n - 2;
    for (int i = 1; i <= n; i++)
    {
        a[cnt] = i;
        cnt = (cnt + 4) % (n * 4);
    }
    cnt = 4*n - 5;
    for (int i = 1; i <= n; i++)
    {
        a[cnt] = i;
        cnt = (cnt + 4) % (n * 4);
    }

    for (auto it : a)
        cout << it << " ";
    cout << endl;
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
