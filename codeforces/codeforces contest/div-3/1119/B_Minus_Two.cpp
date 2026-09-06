#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    int odd = 0, fst = 0, sec = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
            odd++;
        else
        {

            if (a[i] % 4 == 2)
                fst++;
            else
                sec++;
        }
    }

    cout<<max(odd,max(fst,sec))<<endl;
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
