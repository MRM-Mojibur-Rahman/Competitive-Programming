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
        string a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "YES\n";
            continue;
        }
        int posi = -1, mis = -1;

        for (int i = 0; i < n; i++)
        {
            if (posi == -1 && a[i] == '1')
                posi = i;
            if (mis == -1 && a[i] != b[i])
                mis = i;
            if (mis != -1 && posi != -1)
                break;
        }
        if (posi == -1 || mis < posi)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
