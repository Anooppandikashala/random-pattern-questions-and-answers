/*

17.Write a program to print the following star pattern

*
*
* * *
* *
* *
* * * * * *
* * *
* * *
* * * * * * * * *

*/

#include<stdio.h>
int main()
{
    int n = 6, i=0, j=0, count = 1, patternConst = 3;
    for(i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            for(j = 0; j < count ; j++)
            {
                int k=0;
                for(k = 0; k < count ; k++)
                {
                    printf("*");
                }
                printf("\n");
            }
        }
        else{
            int k = 0;
            for(k = 0; k < patternConst * count ; k++)
            {
                printf("*");
            }
            printf("\n");        
            count ++;
        }
    }
}

