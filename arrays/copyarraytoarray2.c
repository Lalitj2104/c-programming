// #include<stdio.h>
// int main(){
//     int n,i;
//     scanf("%d",&n);
//     int arr[n],arr2[n];
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=1;i<=n;i++){
//         arr2[i]=arr[n-i];
//     }
//     printf("the reversed array is : \n");
//     for(i=1;i<=n;i++){
//         printf("%d\n",arr2[i]);
//     }
// }
#include <stdio.h>
int max_of_four(int a, int b, int c, int d)
{
    if (a >= b && a >= c && a >= d)
    {
        printf("%d", a);
    }
    else if (b >= a && b >= c && b >= d)
    {
        printf("%d", b);
    }
    else if (c >= a && c >= b && c >= d)
    {
        printf("%d", c);
    }
    else if (d >= a && d >= b && d >= c)
    {
        printf("%d", d);
    }
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    max_of_four(a, b, c, d);

    return 0;
}