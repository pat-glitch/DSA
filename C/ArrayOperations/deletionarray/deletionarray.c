#include <stdio.h>
#include <conio.h>
void main()
{
    int a[30], n, i, j;
    /*
        n : no. of elements in the array
        i: for scanning the array
        j: location of the element to be deleted
    */
   printf("\n Enter no. of the elements:");
   scanf("%d", &n);
   /*read n elements in the array*/
   printf("\n Enter %d elements:", n);
   for(i=0;i<n;i++)
   scanf("%d", &a[i]);
   // read the location of the array
   printf("\n location of the element to be deleted:");
   scanf("%d", &j); /*loop for the deletion*/
   while(j<n)
   {
    a[j-1]=a[j];
    j++;
   }
   n--; /*no. of elements reduced by 1*/
   /*loop for printing*/
   for(i=0;i<n;i++)
   printf("\n %d", a[i]);
   getch();
}

