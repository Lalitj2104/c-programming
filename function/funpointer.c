#include<stdio.h>
int add(){
    int a,b;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    return a+b;
}
void main(){
    int (*p)(),c;
    p=add;
    c=p();
    printf("sum of two numbers: %d",c);
}