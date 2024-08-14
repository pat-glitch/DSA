#include <stdio.h>
#include <conio.h>
void main()
{
    int a[30], x, n, i;
    /*
        a: array for storing data
        x: element to be searched
        n: no. of elements in the array
        i: scanning of the array
    */

   printf("\n Enter no. of elements:");
   scanf("%d", &n);
    /*Reading Values into Array*/
    printf("/n Enter the values");
    for (i=0;i<n;i++)
    scanf("%d", &a[i]);
    // read the element to be searched
    printf("\n Enter the elements to be searched");
    scanf("%d", &x);
    /*Search the element*/
    i=0;
    while(i<n && x!=a[i])
    i++;
    /*Search until the element is not found i.e. x!=a[i] */
    /*Search for the element until it can be found i<n*/
    if (i<n) /*If element is found*/
        printf("found at the location= %d", i+1);
    else
        printf("\n Not found");
    getch();
}