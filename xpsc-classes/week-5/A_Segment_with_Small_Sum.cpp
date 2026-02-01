#include <bits/stdc++.h>
using namespace std;
#define ll long long
/* first time when i solve this math i get wrong answer then i watch the tutorial after that i solve this prolem
the main problem was the slide window topic wasnt clear to me so i make mistake */
/*the core mistake was i try to solve this problem with fixed size window problem
so i do mistake again and again the main difference btw the variable and fixed size window are
in fixed window
i have to update the answer when it hit the window
and in variable size window
i have to update the answer when it is valid , and if it hit the window i have delete the contribution of the
l */
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    ll sum = 0, l = 0, r = 0, ans = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    while (r < n)
    {
        sum += v[r];
        if (sum <= k)
        {
            ans = max(r - l + 1, ans);
        }
        else
        {
            sum -= v[l]; l++;
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}
