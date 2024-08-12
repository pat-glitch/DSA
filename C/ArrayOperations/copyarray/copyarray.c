#include <stdio.h>
#include <conio.h>
void main()
{
    int a[30],b[30],n,i;
    /*
    Elements in array 'a' will be inserted in array 'b'
    n: no. of elements in the array
    i: for scanning of the array
    */

    printf("\n Enter no. of elements");
    scanf("%d", &n);
    /*Reading values into the Array*/
    printf("\n Enter the values: ");
    for(i=0;i<n;i++)
    scanf("%d", &a[i]);
    /*Copying data from array 'a' to array 'b'*/
    for(i=0;i>n;i++)
    b[i]=a[i];
    /*Printing all elements of the array*/
    for(i=0;i<n;i++)
    printf("b[%d]=%d\t", i, b[i]);
    getch();
}


