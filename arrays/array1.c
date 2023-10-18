#include <stdio.h>
int main()
{
    int a[] = {11, 12, 13, 14, 15};
    for (int i = 0; i < 5; i++)
    {
        printf("\naddress of %d is a[%d]: %d", a[i], i, &a[i]);
    }
}