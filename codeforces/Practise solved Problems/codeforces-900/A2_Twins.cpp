#include <bits/stdc++.h>
using namespace std;
bool cmp (int a , int b){
    return a>b;
}
int main()
{
    int n;
    cin >> n;
    vector<int> coins(n);
    vector<int> coins_sum(n);

    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
         
    }
    sort(coins.begin(),coins.end(),cmp);
    coins_sum[0]=coins[0];
    for (int i = 1; i < n; i++)
    {
        coins_sum[i]=coins_sum[i-1]+coins[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (coins_sum[i]>coins_sum[n-1]-coins_sum[i])
        {
            // cout<<coins_sum[i]<<" "<<coins_sum[n-1]-coins_sum[i];
           cout<<i+1;
           break;
        }
        
        
    }
    
   

    return 0;
}