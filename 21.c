/*

21.Write a program to print the following pattern
* * * * *
  * * * * *
    * * * * *
      * * * * *
        * * * * *

*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    for(int i=0;i<5;i++)
    {
        //print spaces
        for(int k=0; k< i; k++)
        {
            printf("  ");
        }
        for(int j=0;j<5;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
