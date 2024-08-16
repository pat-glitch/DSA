#include<stdio.h>
#include<conio.h>
int symmetry(int a[][10], int m);

void main()
{
    int a[10][10], i, j, m, result;
    printf("Enter the size of the matrix n(n*n):");
    scanf("%d", &m);
    printf("Enter the matrix data:");
    for (i=0;i<m;i++)
        for(j=0;j<m;j++)
            scanf("%d", &a[i][j]);
            result=symmetry(a, m);
            if(result == 0)
                printf("\n Not symmetrical");
            else
        printf("\n Symmetrical");
        getch();
}

int symmetry(int a[][10], int m)
{
    int i, j;
    for(i=1; i<m;i++)
        for(j=0;j<i;j++)
            if(a[i][j]!=a[j][i])
            return(0);
    return(1);
}

