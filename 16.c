/*

16.Write a program to print the following star pattern.
* * *
*
*
*
* * * * * *
* * * * * *
*
*
*
* * * * * * * * *
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
            for(j = 0; j < 3 ; j++)
            {
                printf("*\n");
            }
        }
        else{
            for(j = 0; j < count ; j++)
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