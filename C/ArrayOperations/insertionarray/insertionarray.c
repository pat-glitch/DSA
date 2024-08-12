#include <stdio.h>
#include <conio.h>
void main()
{
    int a[30], x, n, i, loc;
    /*
    x: element to be inserted
    n: no. of elements in the array
    i: for scanning of the array
    loc: place where the element is to be inserted
    */

    printf("\n Enter no. of elements");
    scanf("%d", &n);
    /*read n elements in an array*/
    for (i=0;i<n;i++)
    scanf("%d", &a[i]);
    printf("\n Enter the elements to be inserted: ");
    scanf("%d", &x);
    printf("\n Enter the location");
    scanf("%d", &loc);
    /* create space at the specified location */
    for(i=n-1;i>loc-1;i--)
    a[i+1]=a[i];
    n++;
    a[loc-1]=x; /* Element inserted */
    /*Printing of Result*/
    for(i=0;i<n;i++)
    printf("\n%d", a[i]);
}
