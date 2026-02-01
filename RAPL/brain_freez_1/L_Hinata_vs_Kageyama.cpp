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
        int n;
        cin >> n;
        if (n % 2 == 0)
            cout << n / 2 << " " << n / 2<<endl;
        else
        {
            set<int>divs;
            for (int i = 1; i < sqrt(n)+1 ; i++)
            {
                if(n%i==0)
                {
                    divs.insert(i);
                    if(i!=1) divs.insert(n/i);
                }
            }
            auto it = divs.end();
            it--;
            cout<<*it<<" "<<n-*it<<endl;
            
        }
    }
    return 0;
}
