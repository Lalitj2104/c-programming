#include<stdio.h>
int stack[100],top,stackSize=10;

void push(int data){
    if(top>=stackSize-1){
        printf("overflow");
    }else{
        top++;
        stack[top]=data;
    }
}



void pop(int data){
    if(top<=-1){
        printf("underflow");
    }else{
       (top--);
    }
}


void peek(){
    
}


int main(){
    top-=1;
    push(10);
    for(int i=0;i<=10;i++){
        printf("%d",stack[i]);
        printf("\n");
    }
}