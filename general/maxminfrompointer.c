#include<stdio.h>
//void max();
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int *x=&a;
    int *y=&b;
    max(*x,*y);
}
void max(int*x,int*y){
    if (*x>*y){
        printf("%d",*x);
    }
    else if(*x<*y){
        printf("%d",*y);
    }
    else{
        printf("wrong input");
    }
}
   // max(x,y);


/*void max(int q,int w){
    if(*q>*w){
        printf("number %d is greater",&q);}
    else if(*q<*w){
        printf("number %d is greater",&w);}
    else{
        printf("wrong choice");
    }
    }*/

