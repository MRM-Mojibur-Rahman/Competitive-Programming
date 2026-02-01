#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        int k = 2;
        int n ,m;cin>>n>>m;
        bool two = true , three = false;
        for (int i =0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(two) (j%2==0) ?  cout<<2<<" ":cout<<3<<" ";
                else (j%2==0) ?  cout<<3<<" ":cout<<2<<" ";
                

            }
            cout<<endl;
            two = (two)? false:true;
        }
        
    }
    return 0;
}
