// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n + 1);
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i];
//     }
//     vector<int> segments(n + 1, 0);
//     segments[1] = 1;
//     int sg = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         if (a[i] == a[i - 1])
//         {
//             segments[i] = sg;
//         }
//         else
//         {
//             sg++;
//             segments[i] = sg;
//         }
//     }
//     map<int, int> previouseSegmentEnd;
//     for (int i = n; i > 0; i--)
//     {
//         if (segments[i] != segments[i - 1])
//         {
//             previouseSegmentEnd[segments[i]] = i - 1;
//         }
//     }
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int x, y;
//         cin >> x >> y;
//         if (segments[x] == segments[y])
//         {
//             cout << -1 << " " << -1 << endl;
//         }
//         else
//         {
//             if (a[x] != a[y])
//                 cout << x << " " << y << endl;
//             else
//             {
//                 cout<<x<<" "<<previouseSegmentEnd[segments[y]]<<endl;
//             }
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<int> posi(n + 1);
    posi[0] = -1;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != a[i - 1])
        {
            posi[i] = i - 1;
        }
        else
            posi[i] = posi[i - 1];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        if (posi[r] >= l)
            cout << posi[r] << " " << r << endl;
        else
            cout << -1 << " " << -1 << endl;
        cout << endl;
    }
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
