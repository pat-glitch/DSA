#include<stdio.h>
#include<conio.h>

void main(){
    int a[10][10], n, i, j, major, minor;
    printf("\n Enter size of the matrix(n for n*n): ");
    scanf("%d", &n);
    printf("\n Enter matrix data:");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d", &a[i][j]);
    /*For any element on major diagonal i=j and for an element on minor diagonal i+j=n*/
    major=minor=0;
    for(i=0;i<n;i++){
        major = major+a[i][i];
        minor = minor+a[i][n-i-1];
    }

    printf("\n Sum of elements of major diagonal = %d", major);
    printf("\n Sum of elements of minor diagonal = %d", minor);
    getch();
}