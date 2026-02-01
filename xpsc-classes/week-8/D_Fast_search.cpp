#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
vector<int> v;
int left(int val)
{
    if(v[0]>=val) return 0;
    if(v[n-1]<val) return -1;
    int ans =INT_MAX;
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mild = (l + r) / 2;
        if (v[mild] >= val)
        {
            ans=min(ans,mild);
            r=mild-1; 
        }
        else l = mild+1;
    }
    return ans;
}
int right(int val)
{
    if(v[0]>val) return -1;
    if(v[n-1]<=val) return n-1 ;
    int ans =INT_MIN;
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mild = (l + r) / 2;
        if (v[mild] <= val)
        {
            ans=max(ans,mild);
            l=mild+1; 
        }
        else r = mild-1;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    v.resize(n);
    for (auto &it : v)
        cin >> it;
    int q;
    cin >> q;
    sort(v.begin(), v.end());
    while (q--)
    {
        int leftSide, rightSide;
        cin >> leftSide >> rightSide;
        int lPosi=left(leftSide), rPosi=right(rightSide);
        if(lPosi==-1){ cout<<0<<" ";continue;}
        cout<<rPosi-lPosi+1<<" ";


        
    }

    return 0;
}
