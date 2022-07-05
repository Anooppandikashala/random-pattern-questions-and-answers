/*

18.Write a program to print the following number pattern.
      1
     1 2
    1 2 3
   1 2 3 4
  1 2 3 4 5
 1 2 3 4 5 6

 */
#include<stdio.h>
int main()
{
    int i=0, j=0, k=0;
    int col = 6, row = 6;

    for(i=1; i <= row; i++ )
    {
        //to print spaces
        for(k=1; k<= col-i ; k++)
        {
            printf(" ");
        }
        for(j = 1; j<= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}