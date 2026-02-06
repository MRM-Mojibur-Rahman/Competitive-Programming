#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    FILE *ftr;

    if ((ftr = fopen("CTmarks.txt", "r")) == NULL)
    {
        printf("file did not found");
    }
    // else printf("file founded");
    int ct1, ct2, ct3, ct4;
     printf("Roll NUM\tCT Mark\n");
    for (int i = 1; i <= 5; i++)
    {
        fscanf(ftr, "%d%d%d%d", &ct1, &ct2, &ct3, &ct4);
        int mx1, mx2, mx3;
        int min = ct1;
        if (ct2 < min)
            min = ct2;
        if (ct3 < min)
            min = ct3;
        if (ct4 < min)
            min = ct4;

        int total_best3 = ct1 + ct2 + ct3 + ct4 - min;
        int avgMarks = round((double)total_best3/3);
        printf("%d\t%d\n",i,avgMarks);
       

        // printf("%d %d %d %d\n", ct1, ct2, ct3, ct4);
    }
}