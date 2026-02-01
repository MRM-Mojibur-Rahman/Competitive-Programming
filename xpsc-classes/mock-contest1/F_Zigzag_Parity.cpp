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
        vector<int>ans(n+5);
        ans[0]=1;
        bool even = true;
        for (int i = 1; i+1<= n+5; i+=2)
        {

            if(even)
            {
                ans[i]=i+1;
                ans[i+1]=ans[i]+2;
                even=false;
                
            }
            else 
            {
                ans[i]=i;
                ans[i+1]=i+2;
                even=true;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout<<ans[i]<<" ";
            
        }
        cout<<endl;
        
    }
    return 0;
}
