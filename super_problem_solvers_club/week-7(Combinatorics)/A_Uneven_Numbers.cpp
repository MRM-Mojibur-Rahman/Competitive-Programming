#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin>>n;
    int digi = 0 ;
    int tem = n;
    while (tem)
    {
        digi++;
        tem/=10;
    }
    if(digi==1) cout<<n<<endl;
    else if(digi==2) cout<<9<<endl;
    else if(digi==3) cout<<9+(n-100)+1<<endl;
    else if(digi==4) cout<<909<<endl;
    else if(digi==5) cout<<909+(n-1e4)+1<<endl;
    else if(digi==6) cout<<90909<<endl;
    
    return 0;
}
