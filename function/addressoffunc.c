#include<stdio.h>
void test(){
    return;
}
int main(){
    int a =5;
    int b=6;
    int*p=&a;
    
    printf("address of variable=%u\n",&a);
    printf("Address of function is: %u\n",test);
    return 0;
}