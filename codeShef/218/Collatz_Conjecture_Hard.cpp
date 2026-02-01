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
            {
                ll to = 0, no = 0;
                while (n % 2 != 1)
                {
                    n /= 2;
                    no++;
                }
                while (temp % 2 != 1)
                {
                    temp /= 2;
                    to++;
                }
                if(n==3) no++;
                if(temp==3) to++;
                if (n == 1)
                {
                    cout << min(to, no) << endl;
                }
                else
                    cout << to << endl;
                    // cout<<to<<" "<<no<<endl;
            }
            else
                cout << "-1\n";
        }
        else
        {

            if (n == 1)
                cout << 0 << endl;
            else if (n == 3)
                cout << 1 << endl;
            else
                cout << -1 << endl;
        }
    }

    return 0;
}
