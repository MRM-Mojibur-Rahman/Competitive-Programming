#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    const int mxn = 1e6 + 10;
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;

    vector<vector<int>> spf(mxn);
    vector<int> visit(mxn, 0);
    for (int i = 2; i < mxn; i++)
    {
        if (!visit[i])
        {
            for (int j = i; j < mxn; j += i)
            {
                spf[j].push_back(i);
                visit[j] = 1;
            }
        }
    }
    set<int> existedPrimes;
    for (int i = 0; i < n; i++)
    {
        for (auto it : spf[a[i]])
            existedPrimes.insert(it);
    }

    vector<int> possible(m + 1, 1);
    for (auto it : existedPrimes)
    {
        for (int i = it; i <= m; i += it)
        {
            possible[i] = 0;
        }
    }
    vector<int>ans;
    for (int i = 1; i <= m; i++)
    {
        if (possible[i])
            ans.push_back(i);
    }



    cout << ans.size() << endl;
    for (auto it : ans)
    {
        cout << it << endl;
    }

    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, m;
//     cin >> n >> m;
//     vector<int> a(n);
//     for (auto &it : a)
//         cin >> it;
//     vector<int> visit(m + 1, 0);
//     vector<int> primes;
//     for (int i = 2; i <= m; i++)
//     {
//         if (!visit[i])
//         {
//             primes.push_back(i);
//             for (int j = 2 * i; j <= m; j += i)
//             {
//                 visit[j] = 1;
//             }
//         }
//     }
//     int len = primes.size();
//     // cout<<len;
//     vector<int> in;
//     for (int i = 0; i < n; i++)
//     {
//         int idx = 0;
//         while (a[i] > 1 && idx < len)
//         {
//             if(a[i]%primes[idx]==0)
//             in.push_back(primes[idx]);
//             while (a[i] % primes[idx] == 0)
//             {

//                 a[i] /= primes[idx];
//             }
//             idx++;
//         }
//     }
//     vector<int> posi(m + 1, 1);
//     for (auto it : in)
//     {
//         for (int i = it; i <= m; i += it)
//         {
//             posi[i] = 0;
//         }
//     }
//     vector<int> ans;
//     for (int i = 1; i <= m; i++)
//     {
//         if (posi[i])
//             ans.push_back(i);
//     }

//     cout << ans.size() << endl;
//     for (auto it : ans)
//     {
//         cout << it << endl;
//     }

//     return 0;
// }
