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
        string chefR, chefinaR;
        cin >> chefR >> chefinaR;
        int chef = 0, chefina = 0;
        for (int i = 0; i < n; i++)
        {
            if (chefR[i] == 'R' && chefinaR[i] == 'S')
                chef++;
            else if (chefR[i] == 'S' && chefinaR[i] == 'P')
                chef++;
            else if (chefR[i] == 'P' && chefinaR[i] == 'R')
                chef++;
           else  if (chefR[i] == 'S' && chefinaR[i] == 'R')
                chefina++;
            else if (chefR[i] == 'P' && chefinaR[i] == 'S')
                chefina++;
            else if (chefR[i] == 'R' && chefinaR[i] == 'P')
                 chefina++;
        }
        if(chef>chefina) cout<<0<<endl;
        else if(chef<chefina) cout<<chefina-chef<<endl;
        else cout<<1<<endl;
    }
    return 0;
}
