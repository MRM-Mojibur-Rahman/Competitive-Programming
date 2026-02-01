#include <bits/stdc++.h>
using namespace std;
#define ll long long
int check_kth_Bit_on_or_off(int n , int k)
{
    return ((n>>k)&1);
}
void print_on_and_off_bits(int n)
{
    for (int i = 7; i >=0; i--)
    {
        cout<<check_kth_Bit_on_or_off(n,i);
    }
}
int turn_on_kth_bit(int n , int k)
{
    return ((1<<k)|n);
}
int turn_off_kth_bit(int n, int k)
{
    return (n & (~(1<<k)));
}
int toggle_kth_bit(int n ,int k)
{
    return (n^(1<<k));
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout<<check_kth_Bit_on_or_off(45,4)<<endl;
    // print_on_and_off_bits(45);
    // cout<<turn_on_kth_bit(45,4)<<endl;
    // cout<<turn_off_kth_bit(45,3)<<endl;
    cout<<toggle_kth_bit(45,3)<<endl;
    return 0;
}
