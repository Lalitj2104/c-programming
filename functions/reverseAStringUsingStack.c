#include<stdio.h>
#include<string.h>
#include<stdlib.h>
# define max 100
char str_arr[max];
int top =-1,q=0;
char output[max];
void push(char num){
    if(top==max-1){
        printf("overflow");
    }
    else{
        top++;
        str_arr[top]=num;
    }
}
void pop(){
    if(top==-1){
        printf("Underflow");
    }
    else{
        output[q]=str_arr[top];
        top--;q++;
    }
}
int main(){
    char str[max];
    gets(str);

    for(int i=0;i<strlen(str);i++){
        push(str[i]);
    }

    for(int i=0;i<strlen(str);i++){
        pop();
    }
    for(int i=0;i<strlen(str);i++){
        printf("%c",output[i]);
    }
}
 