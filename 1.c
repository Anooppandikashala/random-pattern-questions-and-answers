/*
1.Write a program to print the following star pattern
* *
*
*
*
* * * *
* * * *
*
*
*
* * * * * *
* * * * * *
* * * * * *
*/
#include<stdio.h>
int main()
{

    int n = 9;
    int i=0, j=0;
    int count = 1;
    for(i = 0; i < n; i++)
    {
        if(i % 4 == 0)
        {
            for(j = 0; j < count ; j++)
            {
                int k = 0;
                for(k = 0; k < count * 2 ; k++)
                {
                    printf("*");
                }
                printf("\n");
            }
            count ++;
        }
        else{
            printf("*\n");
        }
    }
}