#include <stdio.h>
int main()
{
    int arr[3] = {1, 2, 3};
    int *p = arr[3];
    printf("%u\n", &arr);
    // printf("%u\n",&p);
    printf("%u\n", &arr[0]);
}