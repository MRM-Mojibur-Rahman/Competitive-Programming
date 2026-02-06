#include<stdio.h>
#include<string.h>
#define ll long long 
int gcd(int a ,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    int a , b;
    scanf("%d%d",&a,&b);
    printf("%d",gcd(a,b));
    return 0 ;
}