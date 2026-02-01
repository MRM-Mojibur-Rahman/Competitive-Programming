#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int Psum = 0, Nsum = 0;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        Psum+=v[i];
        Nsum-=v[i];
    }
    
  
    bool is = false;
    if(Psum>360)
    for (int i = 0; i < n; i++)
    {
        if(v[i]==Psum%360) is = true;
    }
    
    
    
    if(Psum%360 ==0 ||  temp==0|| is  ) cout<<"YES\n";
    else cout<<"NO\n";
    
    return 0;
}
