#include <stdio.h>
int main()
{
    int a[9];
    int i;
    for (i = 0; i < 9; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 9; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("reverse oder of array is:\n");
    for (i = 8; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }
}