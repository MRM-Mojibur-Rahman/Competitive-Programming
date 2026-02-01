#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> difa(n + 1, 0);
    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        difa[x] += 1;
        difa[y + 1] -= 1;
    }
    for (int i = 1; i <= n; i++)
        difa[i] += difa[i - 1];
    int val = INT_MAX, ind = 0;
    for (int i = 1; i <= n; i++)
    {
        if (val > difa[i])
        {

            val = difa[i];
        }
    }
    cout<<val<<endl;

    return 0;
}
