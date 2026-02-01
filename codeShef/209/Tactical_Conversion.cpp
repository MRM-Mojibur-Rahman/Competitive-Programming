#include <bits/stdc++.h>
using namespace std;

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
        string a;
        cin >> a;
        int one = 0;
        vector<int> sequ1len;
        sequ1len.push_back(0);
        int sequ1 = 0;
        bool pre1 = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                one++;
                sequ1++;
            }
            else
            {
                if (sequ1 != 0)
                {
                    sequ1len.push_back(sequ1);
                    sequ1 = 0;
                   
                }
            }
        }
        if (sequ1 != 0)
        {
            sequ1len.push_back(sequ1);
            sequ1 = 0;
            
        }
        sort(sequ1len.rbegin(),sequ1len.rend());
        if((sequ1len[0]== one && ((one%2==1 && one>1)|| one ==2 ))  || one%2!=0) cout<<"No\n";
        else cout<<"Yes\n";
    }
    return 0;
}
