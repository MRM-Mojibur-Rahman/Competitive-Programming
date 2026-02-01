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
        int n, x;
        cin >> n >> x;
        if (n < x)
        {
            cout << -1 << endl;
            continue;
        }
        else if (n == x)
        {
            cout << 0 << endl;
            continue;
        }
        set<int> a;
        a.insert(n);
        bool is = true;
        for (int i = 1; i <= 32; i++)
        {
            set<int> b;
            for (auto it : a)
            {
                b.insert((it + 1) / 2);
                b.insert(it / 2);
            }
            a = b;
            if (a.find(x) != a.end())
            {
                cout << i << endl;
                is =false;
                break;
            }
        }
        if(is) cout<<-1<<endl;
    }
    return 0;
}
