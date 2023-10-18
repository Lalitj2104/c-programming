#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 5

int stack_arr[MAX];
int top = -1;
int data;

void push(int num)
{
    if (top == MAX - 1)
    {
        printf("Overflow");
    }
    else
    {
        top++;
        stack_arr[top] = num;
    }
}
int pop(int num)
{
    if (top == -1)
    {
        printf("Underflow");
        exit(1);
    }
    else
    {
        int value = stack_arr[top];
        top--;
        return value;
    }
}
// int isfull(){
//     if(top==MAX-1)
//         return 1;
//     else
//         return 0;
// }
// int isempty(){
//     if(top==-1){
//         return 1;
//     }
//     else
//         return 0;
// }

int main()
{
    push(0);
    push(1);
    push(2);
    push(3);
    push(4);

    data = pop(top);
    data = pop(top);
    data = pop(top);
    data = pop(top);
    data = pop(top);
    data = pop(top);
}