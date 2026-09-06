// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (auto &it : a)
//         cin >> it;
//     vector<int> zeros(n);
//     if (a[0] == 0)
//     {
//         zeros[0] = 1;
//         if (n > 1)
//         {
//             if (a[1] > 1)
//             {
//                 cout << -1 << endl;
//                 return;
//             }
//             else a[1]=1;
//         }
//     }
//     for (int i = 1; i < n; i++)
//     {
//         if (a[i] == 0)
//         {
//             zeros[i] = 1 + zeros[i - 1];
//             if (i < n - 1)
//             {
//                 if (a[i + 1] > 1)
//                 {
//                     cout << -1 << endl;
//                     return;
//                 }
//                 else
//                     a[i + 1] = 1;
//             }
//             if (a[i - 1] > 1)
//             {
//                 cout << -1 << endl;
//                 return;
//             }
//             else
//                 a[i - 1] = 1;
//         }
//         else
//             zeros[i] = zeros[i - 1];
//     }
//     // validity check
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] != 0 && a[i] != -1)
//         {
//             bool is = false;
//             if (i - a[i] + 1 >= 0)
//             {
//                 if (zeros[i] - zeros[i - a[i] + 1] != 0)
//                 {
//                     cout << -1 << endl;
//                     return;
//                 }
//             }
//             if (i + a[i] - 1 < n)
//             {
//                 if (zeros[i + a[i] - 1] - zeros[i] != 0)
//                 {
//                     cout << -1 << endl;
//                     return;
//                 }
//             }
//         }
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
    int n;cin>>n;
    vector<int>a(n);
    for(auto &it:a) cin>>it;

    
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
