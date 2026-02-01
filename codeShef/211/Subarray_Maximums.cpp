#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string a;
        cin>>a;
        if(a[0] == '0'|| a[n-1]=='0') {cout<<"-1\n";continue;}
        vector<int>ans(n+1,-1);
        priority_queue<int>add;
        
        for (int i = 0; i < n; i++)
        {
            if(a[i]=='0') 
            {
                ans[n-i-1]=i+1;
            }
            else add.push(i+1);
        }
        for (int i = 1; i <=n; i++)
        {
            if(ans[i]==-1)
            {
                ans[i]=add.top();
                add.pop();
            }
        }
        for (int i = 1; i <=n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        
        
    }
    return 0;
}
