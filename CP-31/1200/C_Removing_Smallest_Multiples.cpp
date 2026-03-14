
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// void solve()
// {
//     int n;
//     cin >> n;
//     string a;
//     cin >> a;
//     vector<bool> vis(n + 1, false), exist(n + 1, false);
//     vector<int> missing;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == '0')
//         {
//             exist[i + 1] = true;
//             missing.push_back(i + 1);
//         }
//     }
//     int len = missing.size();
//     ll ans = 0;
//     for (int i = 0; i < len; i++)
//     {
//         for (int j = missing[i]; j <= n; j += missing[i])
//         {
//             if (exist[j])
//             {
//                 if (!vis[j])
//                 {
//                     ans += missing[i];
//                     vis[j]=true;
//                 }
//             }
//             else break;
//         }
//     }
//     cout<<ans<<endl;
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
 
int main () {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    int n;
    string s;
    cin >> n >> s;
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
      for (int j = i; j <= n; j+=i) {
        if (s[j-1] == '1') break;
        if (s[j-1] == '0') {
          ans += i;
          s[j-1] = '2';
        }
      }
    }
    cout << ans << '\n';
  }
}