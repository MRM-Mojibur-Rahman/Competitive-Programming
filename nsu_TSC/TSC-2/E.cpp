// In the name of Allah
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll a, b, n, s;
    cin >> a >> b >> n >> s;

    if (a == 2 * b && (s == 2 * a || s == a))
    {
        if (n <= 2)
        {
            cout << "YES\n";
            if (n == 1)
                cout << min(a, b) << endl;
            else
            {
                cout << min(a, b) << " " << min(a, b) << endl;
            }
            return;
        }
        cout << "NO\n";
        return;
    }
    if (b == 2 * a && (s == 2 * b || s == b))
    {
        
        if (n <= 2)
        {
            cout << "YES\n";
            if (n == 1)
                cout << min(a, b) << endl;
            else
            {
                cout << min(a, b) << " " << min(a, b) << endl;
            }
            return;
        }
        cout << "NO\n";
        return;
    }
    if (s % a)
    {
        cout << "YES\n";
        for (ll i = 1; i <= n; i++)
        {
            cout << a << " ";
        }
        cout << endl;
        return;
    }
    else if (s % b)
    {
        cout << "YES\n";
        for (ll i = 1; i <= n; i++)
        {
            cout << b << " ";
        }
        cout << endl;
        return;
    }
    ll best = max(a, b);
    ll can_write = s / best - 1;
    ll one_time = min(a, b);
    bool turn_best = true;
    vector<ll> ans;
    while (true)
    {
        if (ans.size() == n)
            break;
        if (turn_best)
        {
            for (ll i = 0; i < can_write; i++)
            {
                if (ans.size() == n)
                    break;
                ans.push_back(best);
            }
            turn_best = false;
        }
        else
        {
            if (ans.size() == n)
                break;
            ans.push_back(one_time);
            turn_best = true;
        }
    }
    cout << "YES\n";
    for (auto val : ans)
    {
        cout << val << " ";
    }
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}