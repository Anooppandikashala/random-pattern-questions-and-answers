/*

* * * * *
*
*
* * *
*
*
* * * * *
*
*
* * *
*
*
* * * * *

*/

#include<stdio.h>
int main()
{

    int n = 9;
    int i=0, j=0;
    int count = 0;
    for(i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            int patternConst = count % 2 == 0 ? 5 : 3;
            for(j = 0; j < patternConst; j++)
            {
                printf("*");
            }
            printf("\n");
            count ++;
        }
        else{
            for(j = 0; j < 2 ; j++)
            {
                printf("*\n");
            }
        }

    }
}