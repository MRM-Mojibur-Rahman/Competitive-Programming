#include <bits/stdc++.h>
using namespace std;

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
        string a;
        cin >> a;

        string b = a;
        sort(b.begin(), b.end());

        if (a == b)
        {
            cout << 0 << '\n';
            continue;
        }

        vector<int> indx;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
                indx.push_back(i + 1);
        }

        cout << 1 << '\n';
        cout << indx.size() << " ";
        for (int x : indx)
            cout << x << " ";
        cout << '\n';
    }
    return 0;
}
