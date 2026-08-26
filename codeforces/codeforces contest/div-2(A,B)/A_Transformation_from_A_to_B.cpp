#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    vector<int> ans;

    bool is = true;
    while (b > a)
    {
        if (b % 2 == 0 || b % 10 == 2 || b % 10 == 0)
        {
            ans.push_back(b);
            b /= 2;
        }
        else if (b % 10 == 1)
        {
            ans.push_back(b);
            b /= 10;
        }
        else
        {
            is = false;
            break;
        }
    }

    if (b != a)
        is = false;

    if (is)
    {
        ans.push_back(b);
        cout << "YES\n";
        cout << ans.size() << endl;
        reverse(ans.begin(), ans.end());
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
    else
        cout << "NO\n";

    return 0;
}
