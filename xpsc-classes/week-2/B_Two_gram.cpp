#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    string sequ;
    cin>>sequ;
    string ans ;
    int mx = INT_MIN;
    for (int i = 1; i < sequ.size(); i++)
    {
        int ocuur = 0;
        string temp;
        temp += sequ[i-1];
        temp += sequ[i];

        for (int j = 0; j < sequ.size()-1; j++)
        {
            if(sequ[i-1]==sequ[j]&& sequ[i]==sequ[j+1]) ocuur++;
        }
        if(mx<ocuur)
        {
            ans=temp;
            mx=ocuur;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}
