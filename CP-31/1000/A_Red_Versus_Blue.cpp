#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, red, blue;
    cin >> n >> red >> blue;
    int sz1 = floor((double)red / (blue + 1)), sz2;
    if (red % (blue + 1) != 0)
        sz2 = ceil((double)red / (blue + 1));
    else
        sz2 = sz1;
    string a, b;
    int idx = 0;
    while (idx < sz1)
    {
        a += 'R';
        idx++;
    }
    a += "B";
    idx = 0;
    while (idx < sz2)
    {
        b += 'R';
        idx++;
    }
    b += 'B';

    string ans = "";

    for (int i = 0; i < blue; i++)
    {

        if ((blue - i) * sz1 < red)
        {
            ans += b;
            red -= sz2;
        }
        else 
            ans += a, red -= sz1;
    }

    while (red > 0)
    {
        ans += "R";
        red--;
    }
    

    cout << ans << endl;
    

    // int l = 0, r = 0;
    // while (r < n)
    // {
    //     r++;

    //     if ((r - l <= sz || b == 0) && red != 0)
    //         cout << "R", red--;
    //     else
    //     {
    //         cout << "B";
    //         l = r;
    //         b--;
    //     }
    // }
    // cout << endl;
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
