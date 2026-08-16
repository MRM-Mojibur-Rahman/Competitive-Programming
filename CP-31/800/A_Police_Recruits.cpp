#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    int n, tot = 0, ans = 0;
    cin >> n;
    while (n--)
    {
        int temp;
        cin >> temp;
        if (temp == -1)
        {
            if (!tot)
                ans++;
            else
                tot--;
        }
        else
            tot += temp;
    }
    cout << ans << endl;
    return 0;
}
