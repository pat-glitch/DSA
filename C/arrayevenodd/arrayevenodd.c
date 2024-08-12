#include <stdio.h>
#include <conio.h>
void main()
{
    int i, a[50], sum, n, even, odd;
    printf("\n Enter no. of Elements");
    scanf("%d",&n); //Reading values into array
    printf("\n Enter the values:");
    for (i=0;i<n;i++)
    scanf("%d", &a[i]); //Computation of total
    sum=0; even=odd=0;
    for (i=0;i<n;i++)
    {
        sum=sum+a[i];
        if (a[i]%2==0)
            even++;
        else
            odd++;
    }
}

