#include<stdio.h>
#include<stdlib.h>
struct Emp{
    char name[10];
    int id;
};
int main(){
    struct Emp e1,*e;
    e=&e1;
    printf("\nEnter Employee name: ");
    scanf("%s",e->name);

    printf("\n Enter Employee id: ");
    scanf("%s",&e->id);
    return 0;
}