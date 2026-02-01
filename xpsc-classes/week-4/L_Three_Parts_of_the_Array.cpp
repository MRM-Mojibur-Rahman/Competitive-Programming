#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int l = 0, r = n - 1;
    long long ans = 0, ls = v[0], rs = v[n - 1];

    while (l < r)
    {
        if (ls == rs)
        {
            ans = ls;
            l++, r--;
            rs += v[r];
            ls += v[l];
        }
        else if (ls > rs)
        {
            r--;
            rs += v[r];
        }
        else
        {
            l++;
            ls += v[l];
        }
    }
    cout<<ans<<endl;
    return 0;
}
