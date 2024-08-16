#include<stdio.h>
#include<conio.h>

void read(int[][10], int, int);
void print(int[][10], int, int);
void multiply(int[][10], int[][10], int[][10],int,int,int);
void main()
{
    int a[10][10], b[10][10], c[10][10],m, n, p;
    /*
        first matrix of size m*n     (a)
        second matrix of size n*p    (b)
        resultant matrix of size m*p (c)
    */
   printf("\n Enter the size of the 1st Matrix: ");
   scanf("%d %d", &m, &n);
   printf("\n Enter the number of coloumns in the 2nd matrix:");
   scanf("%d", &p);
   printf("\n Enter the data of the 1st matrix:");
   read(a, m, n);
   printf("\n Enter the data of the 2nd matrix:");
   read(b, n, p);
   multiply(a,b,c,m,n,p);
   printf("\n Result is:");
   print(c, m, p);
}

void read(int a[][10], int m, int n)
{
    int i,j;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d", &a[i][j]);
}

void print(int a[][10], int m, int n)
{
    int i, j;
    for(i=0;i<m;i++)
    {
        printf("\n");
        for (j=0;j<n;j++)
            printf("%d", a[i][j]);
    }
}

void multiply(int a[][10], int b[][10], int c[][10], int m, int n, int p)
{
    int i, j, k;
    for (i=0;i<m;i++)
        for (j=0;j<p;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
                c[i][j] = c[i][j]+a[i][k]*b[k][j];
        }
}