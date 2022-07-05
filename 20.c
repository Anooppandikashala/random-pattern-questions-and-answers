/*

20.Write a program to print the following Alphabets pattern.
M
M A
M A L
M A L A
M A L A Y
M A L A Y A
M A L A Y A L
M A L A Y A L A
M A L A Y A L A M

*/

#include<stdio.h>

int main()
{
    char malayalam[] = "MALAYALAM";

    for(int i=0; i< 9; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("%c ",malayalam[j]);
        }
        printf("\n");
    }

    return 0;
}