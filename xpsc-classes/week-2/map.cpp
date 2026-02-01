#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int,int>mp; /*----initializing ---*/
    mp[20]=01;/* O(n). */
    mp.insert({10,20});/*-----insert a key and value using insert function  O(n). ---*/
    mp[10]=2;
    mp[11]=3;
    mp[5]=9;
    for (auto[key ,value]:mp)
    {
        cout<<key<<" "<<value<<endl;
    }
    
    // cout<<mp[10]<<"\n";/*---------using key to get the value of the key*/
    return 0;
}
