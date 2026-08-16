#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string a;
    cin >> a;
    pair<char,int>mx={a[0],0};
    for (int i = 1; i < n; i++)
    {
        
        if(a[i]<mx.first)
        {
            cout<<"YES\n";
            cout<<mx.second+1<<" "<<i+1<<endl;
            return 0;
        }
        else{

            mx.first=a[i];
            mx.second=i;
        }
    }
    cout<<"NO\n";
    
    return 0;
}
