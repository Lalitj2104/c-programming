#include <stdio.h>
int main()
{
    int a[5] = {3, 4, 5, 6, 7}, n = 5;
    int b[n], i;
    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    printf("the first array is:");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\nThe second array is:");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", b[i]);
    }
    return 0;
}