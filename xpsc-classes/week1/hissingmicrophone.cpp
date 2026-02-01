#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string isHis;
    cin>>isHis;
    for (int i = 0; i < isHis.size()-1; i++)
    {
        if(isHis[i]=='s'&&isHis[i+1]=='s')
        {
            cout<<"hiss"<<endl;
            return 0;
        }
    }
    cout<<"no hiss"<<endl;
    
    return 0;
}
