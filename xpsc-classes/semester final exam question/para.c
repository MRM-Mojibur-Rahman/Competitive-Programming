#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define ll long long
int main()
{
    FILE *ftr = fopen("input.txt", "r");
    if (ftr == NULL)
    {
        printf("file not found");
        return 0;
    }
    char para[10000];
    int i = 0;
    char a;

    while ((a = fgetc(ftr)) != EOF)
    {
        para[i++] = a;
    }
    para[i] = '\0';

    int vwl = 0, con = 0, spac = 0, num = 0, spc = 0;
    int n = strlen(para);
    for (int i = 0; i < n; i++)
    {
        if (isalpha(para[i]))
        {
            if (para[i] == 'A' || para[i] == 'E' || para[i] == 'I' ||
                para[i] == 'O' || para[i] == 'U' ||para[i] == 'a' || 
                para[i] == 'e' || para[i] == 'i' || para[i] == 'o' || 
                para[i] == 'u')
                vwl++;
            else
                con++;
        }
        else if (isnumber(para[i]))
            num++;
        else if (isspace(para[i]))
            spac++;
        else
            spc++;
    }
    printf("The number of vowel = %d \nThe number of consonant = %d \nThe number of sapce = %d \nThe number of number = %d \nThe number of special = %d \n", vwl, con, spac, num, spc);
    return 0;
}