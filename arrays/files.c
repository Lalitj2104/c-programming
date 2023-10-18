#include <stdlib.h>
#include <stdio.h>
int main()
{
    int *ptr = (int *)malloc(sizeof(int));
    printf("Size of *ptr is : %d\n", sizeof(ptr));
    free(ptr);
    printf("Value of *ptr is %d ", *ptr);
    ptr = NULL;
    return 0;
}
