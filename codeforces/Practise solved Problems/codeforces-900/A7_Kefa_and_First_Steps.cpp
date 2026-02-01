#include <bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    cin >> len;
    vector<int> v(len);
    for (int i = 0; i < len; i++)
    {
        cin >> v[i];
    }
    int ans = 1;
   int ans1=ans;
    for (int i = 0; i < len - 1; i++)
    {
         if (v[i] <= v[i + 1])
        {
            ans++;
            if (i==len-2)
            {
                ans1=max(ans,ans1);
            }
            
        }
        else
        {
            ans1=max(ans,ans1);
            ans=1;
        }
        
    }
    cout<<ans1;

    return 0;
}