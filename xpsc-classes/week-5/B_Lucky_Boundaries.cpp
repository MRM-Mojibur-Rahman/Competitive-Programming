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
        int ans = n;
        if (n % 2 == 1)
        {
            int l = n / 2;
            int r = n + 1 / 2;
            // cout<<n%l<<endl;
            if(n%l>n/2) ans--;
            if(n%r>n/2) ans--;
        }
        cout<<ans<<endl;
    }
    return 0;
}
