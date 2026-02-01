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
        ll n;
        cin >> n;
        if (n % 2 == 0)
        {

            ll temp = (n ^ 3) + 1;
            if (temp > n || temp == 2 || temp == 6)

                cout << "Yes\n";
            else
                cout << "No\n";
        }
        else
        {
            // cout<<(n^3)+1<<endl;
            if (n <= 3)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    // cout<<(^3)+1<<endl;

    return 0;
}
