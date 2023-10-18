#include<stdio.h>
void helloworld();
void goodbye();
int main(){
    helloworld();
    goodbye();
    return 0;
}
void helloworld(){
    printf("hello world\n");
}

void goodbye(){
    printf("Good Bye\n");
}