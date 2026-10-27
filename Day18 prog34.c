/* C program to check whether the elements of an array are even or odd */
#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the size:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d is even\n",a[i]);
        }
        else
        {
            printf("%d is odd\n",a[i]);
        }
    }
    return 0;
}