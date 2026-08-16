#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    string a;
    cin >> a;

    stack<int> st;
    vector<pair<int, int>> pr;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '(')
        {
            st.push(i);
        }
        else
        {
            if (!st.empty())
            {
                pr.push_back({st.top(), i});
                st.pop();
            }
        }
    }

    vector<int> ans(n, 0);

    int pvt = n+1;
    while (!st.empty())
    {
        pvt = st.top();
        st.pop();
    }

    for (auto [x, y] : pr)
    {
        // cout<<x<<" "<<y<<endl;
        if (pvt < x)
        {
            if (k > 0)
            {
                ans[y] = 1;
                k--;
            }
        }
        else
        {
            if (k > 0)
            {
                ans[x] = 1;
                k--;
            }
        }
    }
    for (auto it : ans)
        cout << it;
    cout << endl;

    // stack<int> st;
    // vector<pair<int, int>> subs, mxSubs;
    // pair<int, int> lst = {-1, -1};
    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] == '(')
    //     {
    //         st.push(i);
    //     }
    //     else
    //     {
    //         if (!st.empty())
    //         {
    //             if (lst.first == -1)
    //             {
    //                 lst.first = st.top();
    //                 lst.second = i;
    //             }
    //             else if (lst.second + 1 == st.top() || st.top() + 1 == lst.first)
    //             {
    //                 lst.second = max(lst.second, i);
    //                 lst.first = min(lst.first, st.top());
    //             }
    //             else
    //             {
    //                 subs.push_back(lst);
    //                 lst = {st.top(), i};
    //             }
    //             st.pop();
    //         }
    //     }
    // }
    // if (lst.second != -1)
    //     subs.push_back(lst);
    // int mx = 0;
    // for (auto [x, y] : subs)
    // {
    //     mx = max(mx, y - x);
    // }
    // for (auto [x, y] : subs)
    // {
    //     if (y - x == mx)
    //         mxSubs.push_back({x, y});
    // }
    // for (auto [x, y] : subs)
    // {
    //     cout<<x<<" "<<y<<endl;
    // }
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
