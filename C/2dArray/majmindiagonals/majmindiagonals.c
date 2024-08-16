#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10], i, j, n;
    printf("Enter the size of the matrix n(n*n):");
    scanf("%d", &n);
    printf("Enter the matrix data:");
    for (i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d", &a[i][j]);
    /* Elements of a major diagonal */
    printf("\n Elements of a major diagonal\n:");
    for(i=0;i<n;i++)
        printf("%d", a[i][i]);
    /* Elements of minor diagonal*/
    printf("\n Elements the minor diagonal \n:");
    for(i=0;i<n;i++)
        printf("%d", a[i][n-i-1]);
    getch();
}