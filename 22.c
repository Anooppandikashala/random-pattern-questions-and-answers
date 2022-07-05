/*

22.Write a program to print the following pattern

1 2 3 4 5
 2 4 6 8
  3 6 9
   4 8
    5

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int c = 1;
    for(int i=5; i>0; i--)
    {
        for(int k=0; k<5 -i; k++)
        {
            printf(" ");
        }
        int p = c;
        for(int j=0; j<i; j++)
        {
            printf("%d ",p);
            p += c;            
        }
        printf("\n");
        c += 1;
    }

    return 0;
}
