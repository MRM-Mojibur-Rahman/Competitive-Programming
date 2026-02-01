#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int pre, ans = 1;
    cin >> pre;
    n--;
    while (n--)
    {
        int next;
        cin >> next;
        if (pre != next)
        {
            ans++;
        }
        pre=next;
    }
    cout << ans;

    return 0;
}