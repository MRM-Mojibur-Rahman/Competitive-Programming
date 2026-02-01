#include <bits/stdc++.h>
using namespace std;
int main()
{
    string sum;
    cin >> sum;
    int end = sum.size();
    string nums = "";
    for (int i = 0; i < end; i++)
    {
        if (sum[i] != '+')
        {
            nums += sum[i];
        }
    }
    int e = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < e ; i++)
    {
        if (i==e-1)
        {
           cout<<nums[i];
           break;
        }
        
       cout<<nums[i]<<"+";
    }

    return 0;
}