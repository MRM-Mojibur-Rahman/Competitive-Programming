#include<stdio.h>
#include<string.h>

int main()
{
    char binary[100];
    printf("Enter the binayr number\n");
    scanf("%s",binary);
    int n = strlen(binary);
    int ans = 0 , twoP=1;
    for (int i = n-1; i >=0; i--,twoP*=2)
    {
        if (binary[i]=='1') ans+=twoP;
       
        
    }
    printf("The answer is = %d",ans);
    

    return 0 ;
}