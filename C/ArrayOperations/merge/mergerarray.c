#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10][10],m,n,i,j;
    /*
    Physical size of the array is 10*10 whereas a specified size of the array of the size m*n can be stored in array a
    */
   /*
   
    m: number of rows
    n: number of columns
   
   */

  printf("\nEnter the rows and columns:");
  scanf("%d%d, &m, &n");
  /*Reading the m*n elements*/
  for(i=0;i<m;i++) /*m rows*/
  for(j=0;j<n;j++)
  /*inside each row they are n coloumns*/
  {
    printf("\n Enter the value of (%d)(%d)=", i, j);
    scanf("%d", &a[i][j]);
  }
  /*Printing of all elements of 2-D array*/
  for (i=0;i<m;i++)
  {
    printf("\n ");
    /*each row starts from new line*/
    for(j=0;j<n;j++)
    printf("%d\t", a[i][j]);
  }
}