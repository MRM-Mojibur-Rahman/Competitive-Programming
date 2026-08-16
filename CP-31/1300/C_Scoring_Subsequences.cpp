
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <=n; i++)
    {
        
        
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

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n + 1);
//     for (int i = 1; i <= n; i++)
//         cin >> a[i];

//     int l = 1, r = 1;

//     while (r <= n)
//     {
//         while (l <= n && a[l] < r-l+1)
//         {
//             l++;
//         }
//         cout<<r-l+1<<" ";
//         r++;
//     }
//     cout<<endl;
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

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n + 1);
//     for (int i = 1; i <= n; i++)
//         cin >> a[i];
//     vector<int> ans(n + 1,-1);

//     for (int i = 1; i <=n; i++)
//     {
//         int x = a[i]+i-1;
//         if(x<=n)
//         {
//             ans[x]=a[i];
//         }
//         else{
//             ans[n]= max(ans[n],n-i+1);
//         }
//     }
//     int last = a[1];

//     for (int i = 1; i <=n; i++)
//     {
//         if(ans[i]==-1)
//         {
//             ans[i]=min(i,last);
//         }
//         else last = ans[i];

//     }
//    for (int i = 1; i <=n; i++) cout<<ans[i]<<" ";

//     cout << endl;
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
