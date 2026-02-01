#include<stdio.h>
#include<string.h>
#define ll long long 
int factorial(int n)
{
    if (n==1) return 1;
    return n*factorial(n-1);
    
     
    
}
int main()
{
    int n;
    scanf("%d",&n);
    ll fact = factorial(n);
    printf("The factorial is : %d",fact);
    return 0 ;
}