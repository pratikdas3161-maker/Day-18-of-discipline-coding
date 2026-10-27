/* C program to read and print elements of a 2D array */
#include<stdio.h>
int main()
{
    int n,i,m;
    printf("Enter the numbers of rows:");
    scanf("%d",&n);
    printf("Enter the number of columns:");
    scanf("%d",&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            printf("\nEnter the elements:");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}