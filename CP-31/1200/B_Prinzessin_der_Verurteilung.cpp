// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// map<string, bool> combi1;
// map<string, bool> combi2;
// map<string, bool> combi3;
// void solve()
// {
//     int n;
//     cin >> n;
//     string a;
//     cin >> a;
//     map<int, set<string>> mp;
//     auto ok = [&]()
//     {
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 1; j <= n - i; j++)
//             {
//                 if (j > 3)
//                     break;
//                 if (j == 1)
//                     combi1[a.substr(i, j)] = false;
//                 if (j == 2)
//                     combi2[a.substr(i, j)] = false;
//                 if (j == 3)
//                     combi3[a.substr(i, j)] = false;
//             }
//         }
//     };
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             if (j > 3)
//                 break;
//             if (j == 1)
//                 combi1[a.substr(i, j)] = true;
//             if (j == 2)
//                 combi2[a.substr(i, j)] = true;
//             if (j == 3)
//                 combi3[a.substr(i, j)] = true;
//         }
//     }
//     for (auto [x, y] : combi1)
//     {
//         if (!y)
//         {
//             cout << x << endl;
//             ok();
//             return;
//         }
//     }
//     for (auto [x, y] : combi2)
//     {
//         if (!y)
//         {
//             cout << x << endl;
//               ok();
//             return;
//         }
//     }
//     for (auto [x, y] : combi3)
//     {
//         if (!y)
//         {
//             cout << x << endl;
//               ok();
//             return;
//         }
//     }
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     for (int i = 0; i < 26; i++)
//     {
//         string str1 = "";
//         str1 += ('a' + i);
//         combi1[str1] = false;
//         for (int j = 0; j < 26; j++)
//         {
//             string str2 = str1;

//             str2 += ('a' + j);
//             combi2[str2] = false;
//             for (int k = 0; k < 26; k++)
//             {
//                 string str3 = str2;

//                 str3 += ('a' + k);
//                 combi3[str3] = false;
//             }
//         }
//     }
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<string> st;

    for (int i = 0; i < n; i++) {
        string cur = "";
        for (int j = i; j < n && j < i + 3; j++) {
            cur += s[j];
            st.insert(cur);
        }
    }

    for (char a = 'a'; a <= 'z'; a++) {
        string t(1, a);
        if (!st.count(t)) {
            cout << t << '\n';
            return;
        }
    }

    for (char a = 'a'; a <= 'z'; a++) {
        for (char b = 'a'; b <= 'z'; b++) {
            string t = "";
            t += a;
            t += b;
            if (!st.count(t)) {
                cout << t << '\n';
                return;
            }
        }
    }

    for (char a = 'a'; a <= 'z'; a++) {
        for (char b = 'a'; b <= 'z'; b++) {
            for (char c = 'a'; c <= 'z'; c++) {
                string t = "";
                t += a;
                t += b;
                t += c;
                if (!st.count(t)) {
                    cout << t << '\n';
                    return;
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}