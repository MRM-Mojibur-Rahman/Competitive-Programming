#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n;cin>>n;
    string a;cin>>a;
    bool p =false,o =false;
    int cnt = 0;
    set<char> s;
    for (int i = 0; i < n; ++i)
    {
       if(a[i]=='p') p = true;
       if(a[i]=='o') o = true;

       if(p&&o) 
       {
       	 if(a[i]>'0'&&a[i]<='9') s.insert(a[i]);
       }

    }
    cout<<s.size() <<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}