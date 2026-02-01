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
        int n, k;
        cin >> n >> k;
        string a;
        cin >> a;
        int z = 0, o = 0;
        for (int i = 0; i < n; i++)
        {
            (a[i] == '1') ? o++ : z++;
        }
        int dis = 0;
        if (n % (2 * k) == 0)
        {
            dis = n / 2;
        }
        else
        {
            int rem = n % (k * 2);
            dis =( n / (k * 2))*k;
            if (rem >= k)
            {
                dis +=rem - k;
            }
        }
        int fdis = min(z, o);
        // cout<<fdis<<" "<<dis<<endl;
        if (fdis < dis)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
    return 0;
}
