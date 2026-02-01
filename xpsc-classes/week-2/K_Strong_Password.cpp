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
        string a;
        cin >> a;
        bool is = true;
        for (int i = 1; i < a.size(); i++)
        {
            if (a[i - 1] == a[i])
            {
                char ans;
                if (a[i] >= 'a' && a[i] != 'z')
                    ans = a[i] + 1;
                else
                    ans = a[i] - 1;

                a.insert(i, 1, ans);
                is = false;
                break;
            }
        }
        if (is)
        {
            char ans;
            if (a[a.size() - 1] >= 'a' && a[a.size() - 1] != 'z')
                ans = a[a.size() - 1] + 1;
            else
                ans = a[a.size() - 1] - 1;
            a.push_back(ans);
        }

        cout << a << endl;
    }
    return 0;
}
