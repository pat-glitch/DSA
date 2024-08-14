#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10][10], m, n, i, j;
    /*physical size of the array is 10*10
    whereas a specified size of the array of the size of the array
    of the size m*n can be stored in array a*/
    /*
        m: number of rows
        n: number of coloumns
    */

   printf("\n Enter the number of rows and coloumns:");
   scanf("%d %d", &m, &n);
   /*Reading m*n elements*/
   for(i=0;i<m;i++) /*m rows*/
   for(j=0;j<n;j++)
   /*inside each row there are n coloumns*/
   {
    printf("\n Enter the value of (%d)(%d)=", i, j);
    scanf("%d", &a[i][j]);
   }
   /*printing of all elements of 2-D array*/
   for(i=0;i<m;i++)
   {
    printf("\n");
    /*each row starts from newline*/
    for(j=0;j<n;j++)
    printf("%d\t", a[i][j]);
   }
}

