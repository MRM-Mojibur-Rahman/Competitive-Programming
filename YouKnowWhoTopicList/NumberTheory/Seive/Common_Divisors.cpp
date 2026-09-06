// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int mxn = 1e6 + 1;
// vector<int> spf(mxn + 1, 0);
// vector<vector<int>> divisors(mxn + 1);
// void buildSPF()
// {
//     for (int i = 2; i <= mxn; i += 2)
//         spf[i] = 2;

//     for (int i = 3; 1LL * i * i <= mxn; i += 2)
//     {
//         if (spf[i] == 0)
//         {
//             spf[i] = i;

//             for (int j = i * i; j <= mxn; j += 2 * i)
//             {
//                 if (spf[j] == 0)
//                     spf[j] = i;
//             }
//         }
//     }

//     for (int i = 3; i <= mxn; i += 2)
//         if (spf[i] == 0)
//             spf[i] = i;
// }

// void getDivisors()
// {
//     for (int  n = 1; n <= mxn; n++)
//     {
//         vector<pair<int, int>> factors;

//         while (n > 1)
//         {
//             int p = spf[n];
//             int cnt = 0;

//             while (n % p == 0)
//             {
//                 n /= p;
//                 cnt++;
//             }

//             factors.push_back({p, cnt});
//         }
//         vector<int> divi = {1};
//         for (auto [p, cnt] : factors)
//         {
//             int sz = divi.size();
//             int power = 1;
//             for (int e = 1; e <= cnt; e++)
//             {
//                 power *= p;
//                 for (int i = 0; i < sz; i++)
//                 {
//                     divi.push_back(divi[i] * power);
//                 }
//             }
//         }
//         divisors[n] = divi;
//     }
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     buildSPF();
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (auto &it : a)
//         cin >> it;
//     map<int, int> mp;
//     getDivisors();
//     for (auto it : a)
//     {
//         vector<int> divi = divisors[it];
//         for (auto xt : divi)
//             mp[xt]++;
//     }
//     int mx = 1;
//     for (auto [x, y] : mp)
//     {
//         if (y >= 2)
//             mx = x;
//     }
//     cout << mx << endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> freq(MAXN + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }
    
    for (int d = MAXN; d >= 1; d--)
    {
        int cnt = 0;
        for (int multiple = d; multiple <= MAXN; multiple += d)
        {
            cnt += freq[multiple];

            if (cnt >= 2)
            {
                cout << d << '\n';
                return 0;
            }
        }
    }

    return 0;
}