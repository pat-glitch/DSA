#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10][10], m, i, j, temp;
    /* 
        actual size of matrix is m*n
        i, j = for scanning of an array
        temp - for interchanging of a[i][j] and a[j][i]
    */
    printf("\n Enter the size of the matrix:");
    scanf("%d", &m);
    /* Reading elements of matrix */
    printf("\n Enter the values:");
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
            scanf("%d", &a[i][j]);
    // To print original square matrix
    printf("\n original square matrix is");
    for(i=0;i<m;i++)
    {
        printf("\n ");
        for(j=0;j<m;j++)
            printf("%d\t", a[i][j]);
    }
    /*Finding transpose*/
    for(i=1;i<m;i++)
        for(j=0;j<i;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    /* printing of all elements of final matrix */
    printf("\n Transpose matrix is:");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
        printf("%d\t", a[i][j]);
    }
    getch();
}

