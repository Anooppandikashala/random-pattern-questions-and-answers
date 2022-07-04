/*

5.Write a program to print the following star pattern

* * * * *
*
* * * * * * * * * *
*
*
* * * * * * * * * * * * * * *
*
*
*
* * * * * * * * * * * * * * * * * * * *

*/

#include<stdio.h>
int main()
{

    int n = 7;
    int i=0, j=0;
    int count = 1;
    int patternConst = 5;
    for(i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            for(j = 0; j < patternConst * count ; j++)
            {
                printf("*");
            }
            printf("\n");
            count ++;
        }
        else{
            for(j = 0; j < count-1 ; j++)
            {
                printf("*\n");
            }
            
        }

    }
}