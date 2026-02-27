#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
   stack<char>st;
   for (int i = 0; i < n; i++)
   {
        if(st.empty()) st.push(a[i]);
        else{

            if(st.top()==a[i]) 
            {
                st.pop();
            }
            else st.push(a[i]);
        }
   }
   if(st.empty()) cout<<"YES\n";
   else cout<<"NO\n";
   
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
