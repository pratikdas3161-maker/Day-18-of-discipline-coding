/* C program to count the number of vowels and consonants in a string */
#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter the size:");
    scanf("%d",&n);
    char arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the elements:");
        scanf(" %c",&arr[i]);
    }

    int c_v = 0;
    int c_c = 0;

    for(i=0;i<n;i++)
    {
        switch(arr[i])
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                c_v++;
                break;
            default:
                c_c++;
        }
    }
    printf("Number of vowels: %d\n", c_v);
    printf("Number of consonants: %d\n", c_c);
    return 0;
}