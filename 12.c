/*

*       *
 *     * 
  *   *  
   * *   
    *    
   * *   
  *   *  
 *     * 
*       *

*/
#include <stdio.h>
int main()
{
    int row = 5;
    int col = 9;
    for(int i=0; i < row; i++)
    {
        for(int j=0; j < col; j++)
        {
            if(i == j || j == (col-i)-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            continue;
        }
        printf("\n");   
    }
    for(int i=row-2; i >= 0 ; i--)
    {
        for(int j=0; j < col; j++)
        {
            if(i == j || j == (col-i)-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            continue;
        }
        printf("\n");   
    }
}