#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;

    map<int, int> mp;
    int cnt = 1;
    int len = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            mp[cnt]++;
            cnt = 1;
            len++;
        }
        else
            cnt++;
    }
    mp[cnt]++, len++;


    int currentLenght = n;
    int ans = 0, komce = 0;
    for (auto [x, y] : mp)
    {
       
        if (k >= currentLenght)
        {
            if ((k - currentLenght) % len == 0)
                ans++;
        }
       
        else
        {
            int diff = currentLenght - k;
            if (diff % len == 0 && diff <= ((x - 1 - komce) * len))
                ans++;
        }
        
    
        currentLenght -= ((x - komce) * len);
        komce = x;
        len -= y;
    }
    // int currentLenght = n;
    // int ans = 0, komce = 0;
    // for (auto [x, y] : mp)
    // {
    //     if (len == 1)
    //     {
    //         ans++;
    //     }
    //     else if (k >= currentLenght)
    //     {

    //         if ((k - currentLenght) % len == 0)
    //             ans++;
    //     }
    //     else
    //     {

    //         if (abs(k - currentLenght) % len == 0 && abs(k - currentLenght) <= ((x - 1) * len))
    //             ans++;
    //     }
    //     currentLenght -= ((x - komce) * len);
    //     komce = x;
    //     len -= y;
    // }
 

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
