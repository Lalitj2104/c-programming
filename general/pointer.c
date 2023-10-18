#include<stdio.h>
int main(){
    double v =10;
    double *q;
    q=&v;
    printf("address of v=%u\n",&v);
    printf("value of v=%f\n",q);
    printf("value of v=%f\n,*q");
    printf("address of q=%u\n",&q);
}
//pointers are thr core components of the coding language.pointers are used to the address of other variable, functions or even other pointers. the use of allows low level memory access 