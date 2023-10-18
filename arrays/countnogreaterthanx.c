#include <stdio.h>
int main()
{
    int x, n, i, count = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            count += 1;
        }
        else
        {
            continue;
        }
    }
    // printf("total no.greater than %d is:%d",x,count);
    printf("%d", count);
}