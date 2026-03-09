#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    map<int, int> mp;
    int t5 = 0, z1 = 0, a5 = 0;
    for (int i = 0; i < n; i++)
    {
        mp[a[i] - 'a']++;
        
        if (a[i] - 'a' >= 2 && a[i] - 'a' <= 5)
            t5++;
        if (a[i] - 'a' == 0 || a[i] - 'a' == 1)
            z1++;
        if (a[i] - 'a' > 5)
            a5++;
        
    }
    int ans = 0;
    while (1)
    {
        if (z1 >= 2)
        {
            z1 = -2;
            if (t5 >= 1)
            {
                t5--;
                if(a5>=1)
                {
                    a5--;
                    ans++;
                }
                else if(t5>=1) t5--,ans++;
                else if(z1>=1) z1--,ans++;
                else break;
            }
            else break;
        }
        else break;
    }
    cout<<ans<<endl;
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
