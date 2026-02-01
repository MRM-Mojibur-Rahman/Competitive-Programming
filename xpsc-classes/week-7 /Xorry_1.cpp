#include <bits/stdc++.h>
using namespace std;
#define ll long long
int check_kth_Bit_on_or_off(int n, int k)
{
    return ((n >> k) & 1);
}
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
        int x = 31 - __builtin_clz(n);
        int ansx = 0;
        bool ost = true;
        for (int i = x; i >=0; i++)
        {
            if (check_kth_Bit_on_or_off(n, i) == 1 )
            {
                ansx = (1 << i); 
                break;
            }

        }
        int ansy = (n^ansx);
        cout << min(ansy,ansx) << " " << max(ansy,ansx) << endl;
    }
    return 0;
}
