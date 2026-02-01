#include<stdio.h>
#include<string.h>
#define ll long long 
int main()
{
    char s[1000];
    printf("Enter the string \n");
    fgets(s,sizeof(s),stdin);
    // scanf("%s",s);
    int n = 0;
   
    
    while (s[n]!='\0')
    {
        if(s[n]=='\n')break;
        n++;
    }
    printf("The lenght of given stirng is = %d",n);
   
    
    return 0 ;
}