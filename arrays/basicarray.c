#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 45, 5};
    char arr1[4] = {'w', '3', '*', 'z'};
    float arr3[3] = {5.0, 55.0, 23.0};
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%c\n", arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", arr[i]);
    }
    return 0;
}