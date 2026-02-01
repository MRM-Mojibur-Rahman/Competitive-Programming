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
        string given;
        cin>>given;
        int oneZero = 0 , zeroOne = 0;
        for (int i = 1; i < n; i++)
        {
            if(given[i]=='1'&&given[i-1]=='0') zeroOne++;
            else if(given[i]=='0'&& given[i-1]=='1') oneZero++;
        }
        if(oneZero==0 || zeroOne ==0 ) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
    }
    return 0;
}
