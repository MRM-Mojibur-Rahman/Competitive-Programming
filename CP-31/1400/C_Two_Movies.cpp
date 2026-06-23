#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;

    
  
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

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n), b(n);
//     for (auto &it : a)
//         cin >> it;
//     for (auto &it : b)
//         cin >> it;
//     vector<int> neg1(n, 0), neg2(n, 0);
//     if (a[n - 1] < 0)
//         neg1[n - 1] = 1;

//     if (b[n - 1] < 0)
//         neg2[n - 1] = 1;

//     for (int i = n - 2; i >= 0; i--)
//     {
//         if (a[i] < 0)
//             neg1[i] += 1 + abs(neg1[i + 1]);
//         else
//             neg1[i] = neg1[i + 1];

//         if (b[i] < 0)
//             neg2[i] += 1 + abs(neg2[i + 1]);
//         else
//             neg2[i] = neg2[i + 1];
//     }
//     int as = 0, bs = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] >= 0 && b[i] >= 0)
//         {
//             if (neg1[i] > neg2[i])
//                 as += a[i];
//             else if (neg1[i] < neg2[i])
//                 bs += b[i];
//             else
//             {
//                 if (as > bs)
//                     bs++;
//                 else
//                     as++;
//             }
//         }
//         else if (a[i] == -1 && b[i] == -1)
//         {
//             if (a[i] > b[i])
//                 as += a[i];
//             else
//                 bs += b[i];
//         }
//         else
//         {
//             if (a[i] > -1 && as <= bs)
//                 as++;
//             else if (b[i] > -1 && as >= bs)
//                 bs++;
//             else 
//         }
//         // cout << as << " " << bs << endl;
//     }
//     if (min(as, bs) > 0)
//         cout << 1 << endl;
//     else if (min(as, bs) < 0)
//         cout << -1 << endl;
//     else
//         cout << 0 << endl;
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
