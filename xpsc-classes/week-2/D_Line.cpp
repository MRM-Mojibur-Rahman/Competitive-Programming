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
        string sequ; /*taking input */
        cin >> sequ;
        ll sum = 0;
        for (ll i = 0; i < n; i++) /* total sum before the  exicution*/
        {
            if (sequ[i] == 'L')
            {
                sum += i;
            }
            else
            {
                sum += n - 1 - i;
            }
        }

        vector<ll> increase;
        for (ll i = 0; i < n; i++)
        {
            ll l = 0,r=0;

            if(sequ[i]!='L') l = (2 * i) + 1 - n;

             if(sequ[i]!='R') r = n - 2 * i - 1;

            increase.push_back(max(r, l));
        }

        sort(increase.begin(), increase.end());
       
        for (ll i = 0; i < n; i++)
        {
            if (!increase.empty())
            {

                sum += increase.back();

                increase.pop_back();
            }
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}
