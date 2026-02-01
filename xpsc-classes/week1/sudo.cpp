#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n>>k;
    vector<int> nums(n + 1, 0);
    int minNum = 0;
    int opt = 0;
    for (int i = 0; i < n; i++)
    {
     
        cin>>nums[i];
        // if (x < k && nums[x] == 0)
        // {
        //     minNum++;
        //     nums[x] = 1;
       
    }
    sort(nums.begin(),nums.end());
    for (int i = 0; i < n; i++)
    {
        cout<<nums[i]<<" ";
    }
    
   

    return 0;
}
