/* C program to read and print elements of a 2D array */
#include<stdio.h>
int main()
{
    int n, m;
    printf("Enter the number of rows:");
    scanf("%d", &n);
    printf("Enter the number of columns:");
    scanf("%d", &m);
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Enter the element at position (%d, %d): ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The elements of the 2D array are:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;

}