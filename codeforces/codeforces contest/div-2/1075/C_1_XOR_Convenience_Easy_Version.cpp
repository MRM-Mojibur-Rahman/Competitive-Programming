#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> s;
        vector<int> ans;
        for (int i = 2; i <= n; i++)
        {
            s.insert(i);
        }
        for (int i = 2; i < n ; i++)
        {
            ans.push_back(i ^ 1);
            s.erase(i ^ 1);
        }
        ans.push_back(1);
        cout << *s.begin() << " ";
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}
