#include <bits/stdc++.h>
using namespace std;
int main()
{
    string cap;
    cin >> cap;
    if (cap[0] >= 97){
        cap[0]-=32;
    }
    cout<<cap;
        return 0;
}