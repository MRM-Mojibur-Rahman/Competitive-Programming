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
        int n , m;
        cin>>n>>m;
        string a ,b;
        cin>>a;
       set<int>ind;
        for (int i = 0; i < m; i++)
        {
            int x ;cin>>x;
            ind.insert(x);
        }
        cin>>b;
        sort(b.begin(),b.end());
        int j = 0 ;
        for(int x : ind){
        
            a[x-1]=b[j++];
        }
        cout<<a<<endl;
        
    }
    return 0;
}
