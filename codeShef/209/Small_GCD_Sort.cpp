#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a , pair<int,int> b)
{
     if(a.first==b.first)
     return a.second>b.second;
     else return a.first<b.first;

}
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
       

        vector<pair<int,int>>ans;
        
        for (int i = 1; i <=n; i++)
        {
            int gcd = 1;
            for (int j = 1; j <=n; j++)
            {
                if(i%j==0 && n%j==0 && j>gcd) gcd = j;

            }
            ans.push_back({gcd,i});

            
        }
        sort(ans.rbegin(),ans.rend(),cmp);
        for(auto x: ans) cout<<x.second<<" ";
        cout<<endl;
        
    }
    return 0;
}
