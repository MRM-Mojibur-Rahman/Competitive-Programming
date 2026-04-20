 #include <bits/stdc++.h>
 using namespace std;
 #define ll long long
 
 void solve()
 {
     int n;cin>>n;
     map<int,int>mp;
     for (int i = 0; i < n; i++)
     {
        int x;cin>>x;
        mp[x]++;
     }
     for(auto [x,y]:mp)
     {
        if(y>1) {
            cout<<"YES\n";
            return;
        } 
     }
     cout<<"NO\n";
     
 }
 
 int main()
 {
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
 
     int t;
     cin >> t;
     while (t--)
     {
         solve();
     }
     return 0;
 }
 