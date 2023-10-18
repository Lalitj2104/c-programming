#include<stdio.h>
void maxmin(int x,int y){
    if(x<y){
        printf("y is greater than x\n");
    }
    else if(x>y){
        printf("x is greater than y\n");
    }
    else{
        printf("wrong input\n");
    }
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    maxmin(x,y);
}