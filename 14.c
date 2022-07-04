/*
14.Write a program to print the following star pattern.

* *
*
* * * *
*
*
*
* * * * * * * *
*
*
*
*
*

*/

#include<stdio.h>
int main()
{
    int n = 6;
    int i=0, j=0;
    int patternConst = 2;
    int innerPatternCount = 1;
    for(i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            for(j = 0; j < patternConst ; j++)
            {
                printf("*");
            }
            printf("\n");
            patternConst *= 2;
        }
        else{
            for(j = 0; j < innerPatternCount ; j++)
            {
                printf("*\n");
            }
            innerPatternCount +=2;
        }

    }
}