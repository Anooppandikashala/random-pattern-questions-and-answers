/*

* * *
* * *
*
* * * * * *
* * * * * *
*
*
* * * * * * * * *
* * * * * * * * *

*/

#include<stdio.h>
int main()
{

    int n = 5;
    int i=0, j=0;
    int count = 1;
    int patternConst = 3;
    for(i = 0; i < n; i++)
    {
        if(i % 2 != 0)
        {
            for(j = 0; j < count-1 ; j++)
            {
                printf("*\n");
            }
        }
        else{
            for(j = 0; j < 2 ; j++)
            {
                int k = 0;
                for(k = 0; k < patternConst * count ; k++)
                {
                    printf("*");
                }
                printf("\n");
            }
            count ++;
        }
    }
}