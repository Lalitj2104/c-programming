#include <stdio.h>
int fibo(int i)
{
    if (i == 0 || i == 1)
        return i;
    else
        return fibo(i - 1) + fibo(i - 2);
}
int main()
{
    int i, n;
    printf("Enter a digit for fibonacci series: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        printf(" %d ", fibo(i));
    return 0;
}
