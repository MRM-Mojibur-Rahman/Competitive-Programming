#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;

    int ans = 1;
    int even = 0, odd = 0, evCnt = 0, odCnt = 0;

    bool is = false;
    char lst = '?';
    for (int i = 0; i < n; i += 2)
    {
        if (a[i] == '?')
            even++;
        evCnt++;
        if (is)
        {
            if (a[i] == lst)
                ans = 0;

            if (lst == '1')
                lst = '0';
            else
                lst = '1';
        }

        if (a[i] == '1' || a[i] == '0')
        {
            is = true;

            lst = a[i];
        }
    }

    if (even == evCnt)
        ans *= 2;
     is = false;
     lst = '?';
    for (int i = 1; i < n; i += 2)
    {
        if (a[i] == '?')
            odd++;
        odCnt++;
        if (is)
        {
            if (a[i] == lst)
                ans = 0;

            if (lst == '1')
                lst = '0';
            else
                lst = '1';
        }

        if (a[i] == '1' || a[i] == '0')
        {
            is = true;
            lst = a[i];
        }
    }

    if (odd == odCnt)
        ans *= 2;

    cout<<ans<<endl;
}

// // bool is = false;
// for (int i = 0; i < n; i += 2)
// {

//     if (i != 0 && a[i - 2] == a[i] && a[i] != '?')
//         is = true;
// }
// // for (int i = 1; i < n; i += 2)
// // {
// //     odCnt++;
// //     if (a[i] == '?')
// //         odd++;

// //     if (i != 1 && a[i - 2] == a[i] && a[i] != '?')
// //         is = true;
// // }

// // int ans = 1;
// // if (is)
// // {
// //     cout << 0 << endl;
// //     return;
// // }
// // if (n == 2 && odd == 1 && even == 1)
// // {
// //     cout << 4 << endl;
// //     return;
// // }

// // if (even == evCnt || odCnt == odd)
// //     ans = 2;

// // if (even == evCnt && odCnt == odd && n % 2)
// //     ans = 3;

// // cout << ans << endl;
// }

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
