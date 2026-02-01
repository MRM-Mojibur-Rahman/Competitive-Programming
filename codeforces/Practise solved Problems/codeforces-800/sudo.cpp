#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    string stones;
    cin >> stones;
    int ans = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ans == n-1)
            {
                break;
            }
            if (stones[i] == stones[j])
            {
                ans++;
            }
            else
            {
                i = j;
                break;
            }
        }
        if (ans - 1 == n)
        {
            // this code is right;
            break;
        }
    }

    cout << ans;

    return 0;
}