#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    /*------------my code -----------*/
    // map<string,int>order;
    // for (int i = 0; i < n; i++)
    // {
    //     string name ;
    //     cin>>name;
        
    //     order[name]=i;
    // }
    // vector<pair<int,string>>ans;
    // for (auto[key ,value]:order)
    // {
    //     ans.push_back({value,key});
    // }
    // sort(ans.begin(),ans.end());
    // for(int i = ans.size()-1;i>=0;i--)
    // {
    //     cout<<ans[i].second<<endl;
    // }
    /*-------------optimize code from chatgpt---------*/
    vector<string>give(n),result;
    for (int i = 0; i < n; i++)
    {
        cin>>give[i];
    }
    
    unordered_set<string>seen;
    seen.reserve(n * 2); 
    for (int i = n-1; i>=0; i--)
    {
        if(seen.find(give[i])==seen.end())
        {
            result.push_back(give[i]);
            seen.insert(give[i]);
        }
        
    }
    for(auto s : result) cout<<s<<"\n";

    
    
    return 0;
}
