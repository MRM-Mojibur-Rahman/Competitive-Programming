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
        int a, b;
        cin >> a >> b;
    
        int k = 31 - __builtin_clz(a);
        int highval=(1<<(k+1))-1;
        // highval++;
        if (highval< b)
        {
            cout << -1 << endl;
            continue;
        }
        else if(a==b) {cout<<0<<endl; continue;}
        int ans = 0;
        for (int i = 0; i < k; i++)
        {
            int as = check_kth_Bit_on_or_off(a, i);
            int bs = check_kth_Bit_on_or_off(b, i);
            if (as != bs)
            {
                ans |= (1 << i);
            }
        }
        cout<<2<<endl;
        int kth = ( check_kth_Bit_on_or_off(a, k)!=check_kth_Bit_on_or_off(b, k))? 0|(1<<k):0;
        cout<<ans<<" "<<kth<<endl;

    }
    return 0;
}
