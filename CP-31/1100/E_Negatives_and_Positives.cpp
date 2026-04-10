// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// void solve()
// {
//     ll n;
//     cin >> n;
//     vector<ll> a(n + 1, 0);
//     for (ll i = 1; i <= n; i++)
//     {
//         cin >> a[i];
//     }
//     vector<pair<int, int>> tem;

//     for (int i = 1; i <= n; i++)
//     {
//         if (a[i] < 0)
//         {
//             tem.push_back({a[i], i});
//         }
//         else
//         {
//             if (tem.size() == 1 || tem.size() == 0)
//                 continue;
//             if (tem.size() % 2 == 0)
//             {
//                 for (auto [x, y] : tem)
//                 {
//                     a[y] = abs(a[y]);
//                 }
//             }
//             else
//             {
//                 sort(tem.begin(), tem.end());
//                 int len = tem.size();
               
//                 for (int j = 0; j < len - 1; j++)
//                 {
//                     a[tem[j].second] = abs(a[tem[j].second]);
                 
//                 }
//             }
//             tem.clear();
//         }
//     }
//     if (tem.size() % 2 == 0)
//     {
//         for (auto [x, y] : tem)
//         {
//             a[y] = abs(a[y]);
//         }
//     }
//     else
//     {
//         sort(tem.begin(), tem.end());
//         int len = tem.size();
      
//         for (int j = 0; j < len - 1; j++)
//         {
//             a[tem[j].second] = abs(a[tem[j].second]);
            
//         }
//     }
//     tem.clear();

//     for (ll i = 2; i <= n; i++)
//     {
//         if (a[i] >= 0 && a[i - 1] >= 0)
//             continue;

//         if (a[i] < 0 && a[i - 1] < 0)
//             a[i] = abs(a[i]), a[i - 1] = abs(a[i - 1]);
//         else
//         {
//             if (a[i] < 0 && a[i - 1] >= 0)
//             {
//                 if (abs(a[i]) > a[i - 1])
//                     a[i] = abs(a[i]), a[i - 1] = -a[i - 1];
//             }
//             else
//             {
//                 if (abs(a[i - 1]) > a[i])
//                     a[i - 1] = abs(a[i - 1]), a[i] = -a[i];
//             }
//         }
//     }
//     ll sum = 0;
//     for (ll i = 1; i <= n; i++)
//     {
//         sum += a[i];
//     }
//     cout << sum << endl;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
