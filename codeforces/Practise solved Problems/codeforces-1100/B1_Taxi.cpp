#include <bits/stdc++.h>
using namespace std;
// bool cmp(int a, int b) { return a > b; }
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> four(4, 0);
    for (int i = 0; i < n; i++)
    {
        four[v[i] - 1]++;
    }
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<four[i]<<" ";
    // }

    // return 0;
    int ans = four[3];
 
    if (four[2] >= four[0]) // for 3
    {
        ans += four[2];
        four[0] = 0;
    }
    else if (four[2] < four[0])
    {
        ans += four[2];
        four[0] -= four[2];
    }
    // cout<<four[0];
    // for 2
    if (four[1] > 1)
    {
        float a = (float)four[1] / 2;
        if (four[1] % 2 == 1)
        {
            four[0] -= 2;
        }

        ans += ceil(a);
    }
    else if (four[1]==1)
    {
        ans++;
        four[0]-=2;
    }
    
    
    

    if (four[0] % 4==0)
    {
        ans += four[0] / 4 ;
    }
    else if (four[0]>4)
    {
       ans += four[0] / 4 +1;
    }
    
    else if(four[0]>0)
    {
        ans++;
    }

    // ans+=four[0];

    cout << ans;

    return 0;
}