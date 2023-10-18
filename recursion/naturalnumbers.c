#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int m=nnumbers(x);
}
int nnumbers(int x){
    if(x==1){
        return 1;
    }
    else{
        return nnumber(x-1);
    }
    printf("%d",m);
}