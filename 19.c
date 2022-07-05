/*

19.Write a program to print the following Alphabets pattern.

I
I N
I N D
I N D I
I N D I A

*/

#include<stdio.h>

int main()
{
    char india[5] = "INDIA";

    for(int i=0; i< 5; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("%c ",india[j]);
        }
        printf("\n");
    }

    return 0;
}