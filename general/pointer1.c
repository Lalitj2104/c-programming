#include<stdio.h>
int main(){
    int a=20;
    int *y = &a;
    int b=&y;
    printf("%u\n",&a);
    printf("%d\n",y);
    printf("%d\n",b);
}